/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 2
/
#include "Date.h"
#include<iostream>
using namespace std;
//```````````````````````````````````````````````````````````````````DATE CLASS``````````````````````````````````````````````````````````````
Date::Date()
{
    day = 0;
    month = 0;
    year = 0;
}
Date::Date(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
int Date::getDay() const
{
    return day;
}
void Date::setDay(int d)
{
    day = d;
}
int Date::getMonth() const
{
    return month;
}
void  Date::setMonth(int m)
{
    month = m;
}
int Date::getYear() const
{
    return year;
}
void  Date::setYear(int y)
{
    year = y;
}
//`````````````````````````````````````````````````````````````````````PERSON CLASS```````````````````````````````````````````````````````````````````
Person::Person()
{
    name = " ";
    gender = ' ';
    dob = Date(0, 0, 0);
    noOfChildren;
}
Person::Person(string n, char g, int day, int month, int year)
{
    name = n;
    gender = g;
    dob = Date(day, month, year);
    noOfChildren = 0;
    children = nullptr;
}

Person::Person(const Person& other) : name(other.name), gender(other.gender), dob(other.dob), noOfChildren(other.noOfChildren), children(nullptr)
{
    if (other.children != nullptr)
    {
        children = new Person * [noOfChildren];
        for (int i = 0; i < noOfChildren; i++)
        {
            children[i] = new Person(*(other.children[i]));
        }
    }
}
Person::~Person()
{
    if (children != nullptr)
    {
        for (int i = 0; i < noOfChildren; i++)
        {
            delete children[i];
        }
        delete[] children;
    }
}
string Person::getName() const
{
    return name;
}
void Person::setName(string n)
{
    name = n;
}
char Person::getGender() const
{
    return gender;
}
void Person::setGender(char g)
{
    gender = g;
}
const Date& Person::getDOB() const
{
    return dob;
}
void Person::setDOB(const Date& d)
{
    dob = d;
}
int Person::getNoOfChildren() const
{
    return noOfChildren;
}
void Person::setNoOfChildren(int num)
{
    noOfChildren = num;
}
Person** Person::getChildren() const
{
    return children;
}
void Person::setChildren(Person** c)
{
    children = c;
}
void Person::displayData() const
{
    cout << "Name of the Person               : " << name << endl;
    cout << "Gender of the Person             : " << gender << endl;
    cout << "DOB of the Person                : " << dob.getDay() << "/" << dob.getMonth() << "/" << dob.getYear() << endl;
    cout << "Number of Children of the Person : " << noOfChildren << endl;
    for (int i = 0; i < noOfChildren; i++)
    {
        if (children[i] != nullptr)
        {
            cout << "Registered Child " << i + 1 << " of the Person : " << children[i]->getName() << endl;
        }
    }
}
//calculating age until 2023
int Person::calAge(int cur_year) const
{
    if (cur_year < dob.getYear())
    {
        cout << "Invalid !!!" << endl;
        return -1;
    }
    else
    {
        int age = cur_year - dob.getYear();
        return age;
    }
}
//````````````````````````````````````````````````````````````````````````FAMILY TREE``````````````````````````````````````````````````````````
FamilyTree::FamilyTree(Person* foreFather)
{
    this->foreFather = foreFather;
}
void FamilyTree::setForeFather(Person* f)
{
    foreFather = f;
}
Person* FamilyTree::getForeFather() const
{
    return foreFather;
}
FamilyTree::~FamilyTree()
{
    delete foreFather;
}
//Register children
void FamilyTree::registerChild(Person& p, Person& child)
{
    if (p.getNoOfChildren() >= 3)
    {
        cout << "A person can only have 3 children!" << endl;
        return;
    }
    if (p.getChildren() == nullptr)
    {
        p.setChildren(new Person * [3] { nullptr, nullptr, nullptr });
    }
    p.getChildren()[p.getNoOfChildren()] = new Person(child);
    p.setNoOfChildren(p.getNoOfChildren() + 1);
    child.setNoOfChildren(0); // Reset the child's number of children to 0
}
//Finding Youngest Child of Papa
Person* FamilyTree::findYoungestChildOf(Person& p)
{
    Person* youngest = nullptr;
    Person** children = p.getChildren();
    for (int i = 0; i < p.getNoOfChildren(); i++)
    {
        int curr_age = children[i]->calAge(2023);
        if (youngest == nullptr || curr_age < youngest->calAge(2023))
        {
            youngest = children[i];
        }
    }
    return youngest;
}
//Displaying Family of papa
void FamilyTree::displayFamilyOf(Person& p)
{
    cout << "\t\t\t\t\t_________________________________" << endl;
    cout << "\t\t\t\t\t|Family Information of " << p.getName() << "|" << endl;
    cout << "\t\t\t\t\t|_______________________________|" << endl;
    Person** children = p.getChildren();
    for (int i = 0; i < p.getNoOfChildren(); i++)
    {
        if (children[i] != nullptr)
        {
            children[i]->displayData();
            cout << endl;
        }
    }
}
//Finding eldest grandson of papa
Person* FamilyTree::FindEldestGrandsonOf(Person* grandfather)
{
    int age_max = -1;
    Person* eldestGrandson = nullptr;

    Person** children = grandfather->getChildren();
    for (int i = 0; i < grandfather->getNoOfChildren(); i++)
    {
        Person** grandchildren = children[i]->getChildren();
        for (int j = 0; j < children[i]->getNoOfChildren(); j++)
        {

            int age = grandchildren[j]->calAge(2023);
            char gender = grandchildren[j]->getGender();
            if (grandchildren[j]->getGender() == 'M')
            {
                if (age > age_max)
                {
                    age_max = age;
                    eldestGrandson = grandchildren[j];
                }
            }

        }
    }

    return eldestGrandson;
}
//Displaying whole Family Tree
void FamilyTree::displayAncestorsOf(Person& p)
{
    if (p.getNoOfChildren() > 0)
    {
        cout << "Children of " << p.getName() << ":" << endl;
        for (int i = 0; i < p.getNoOfChildren(); i++)
        {
            if (p.getChildren()[i] != nullptr)
            {
                cout << p.getChildren()[i]->getName() << endl;
            }
        }
        cout << endl;

        for (int i = 0; i < p.getNoOfChildren(); i++)
        {
            if (p.getChildren()[i] != nullptr)
            {
                displayAncestorsOf(*(p.getChildren()[i]));

            }
        }
    }
}