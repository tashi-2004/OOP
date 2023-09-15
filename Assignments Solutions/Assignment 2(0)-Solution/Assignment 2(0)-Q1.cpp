/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 2
*/
#include<iostream>
#include"Date.cpp"
using namespace std;
int main()
{
    cout << "\033[36m" << endl;
    cout << "\t\t\t\t\t__________________________" << endl;
    cout << "\t\t\t\t\t|Forefather's Information|" << endl;
    cout << "\t\t\t\t\t|________________________|" << endl;
    cout << endl;
    Person* foreFather = new Person("Ghazanfar", 'M', 25, 1, 1975);
    FamilyTree f1(foreFather);
    Person p1("Tashfeen", 'M', 8, 11, 2004);
    Person p2("Laiba", 'F', 16, 6, 2003);
    Person p6("Shubu", 'F', 16, 6, 2001);
    //These are our children
    Person p3("Wishma", 'F', 1, 1, 2019); //Tashi
    Person p4("Momin", 'M', 2, 1, 2020); //Tashi
    Person p5("Ayesha", 'F', 1, 7, 2021);//laiba
    Person p8("Amna", 'F', 1, 1, 2023);  //laiba
    Person p7("Hassan", 'M', 1, 3, 2011);//shubu
    //p1, p3 passing means p3 is child of p1
    f1.registerChild(p1, p3);
    f1.registerChild(p1, p4);
    f1.registerChild(p2, p5);
    f1.registerChild(p2, p8);
    f1.registerChild(p6, p7);
    //Now, we are registered as papa children
    f1.registerChild(*foreFather, p1);
    f1.registerChild(*foreFather, p2);
    f1.registerChild(*foreFather, p6);
    foreFather->displayData();
    //for youngestChild
    Person* youngestChild = f1.findYoungestChildOf(*foreFather);
    if (youngestChild != nullptr) {
        cout << "Youngest Child                   : " << youngestChild->getName() << endl;
    }
    cout << "__________________________________________________________________________________" << endl;
    f1.displayFamilyOf(*foreFather);
    //For eldest grand son
    Person* eldestGrandson = f1.FindEldestGrandsonOf(foreFather);
    if (eldestGrandson != nullptr)
    {
        cout << "__________________________________________________________________________________" << endl << endl;
        cout << "Eldest Grandson                  : " << eldestGrandson->getName() << endl << endl;
        cout << "__________________________________________________________________________________" << endl << endl;
    }
    //Display Family tree
    cout << "'\n\t\t\t\t\t-------->Family Tree<---------" << endl << endl;
    f1.displayAncestorsOf(*foreFather);
    return 0;
}




//for later use
//Q1 in one cpp file
/*
#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int d, int m, int y);
    int getDay() const;
    void setDay(int d);
    int getMonth() const;
    void setMonth(int m);
    int getYear() const;
    void setYear(int y);
};
//````````````````````````````DATE CLASS`````````````````````````````````
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

//````````````````````````````````PERSON CLASS`````````````````````````````````
class Person
{
private:
    string name;
    char gender;
    Date dob;
    int noOfChildren;
public:
    Person** children;
    Person();
    Person(string n, char g, int day, int month, int year);
    Person(const Person& other);
    // Person& operator=(const Person& other);////////////////////
    ~Person();
    string getName() const;
    void setName(string n);
    char getGender() const;
    void setGender(char g);
    const Date& getDOB() const;
    void setDOB(const Date& d);
    int getNoOfChildren() const;
    void setNoOfChildren(int num);
    Person** getChildren() const;
    void setChildren(Person** c);
    void displayData() const;
    int calAge(int cur_year) const;
};


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

Person::Person(const Person& other) : name(other.name), gender(other.gender), dob(other.dob), noOfChildren(other.noOfChildren), children(nullptr) {
    if (other.children != nullptr) {
        children = new Person * [noOfChildren];
        for (int i = 0; i < noOfChildren; i++) {
            children[i] = new Person(*(other.children[i]));
        }
    }
}
Person::~Person() {
    if (children != nullptr) {
        for (int i = 0; i < noOfChildren; i++) {
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
    gender = g; \
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
void Person::displayData() const {
    cout << "Name of the Person               : " << name << endl;
    cout << "Gender of the Person             : " << gender << endl;
    cout << "DOB of the Person                : " << dob.getDay() << "/" << dob.getMonth() << "/" << dob.getYear() << endl;
    cout << "Number of Children of the Person : " << noOfChildren << endl;
    for (int i = 0; i < noOfChildren; i++) {
        if (children[i] != nullptr) {
            cout << "Registered Child " << i + 1 << " of the Person : " << children[i]->getName() << endl;
        }
    }
}

int Person::calAge(int cur_year) const {
    if (cur_year < dob.getYear()) {
        cout << "Invalid !!!" << endl;
        return -1;
    }
    else {
        int age = cur_year - dob.getYear();
        return age;
    }
}
//````````````````````````````````````FAMILY CLASS```````````````````````````````````````
class FamilyTree
{
private:
    Person* foreFather;

public:
    FamilyTree(Person* foreFather);
    ~FamilyTree();

    void setForeFather(Person* f);
    Person* getForeFather() const;
    void registerChild(Person& p, Person& child);
    Person* findYoungestChildOf(Person& p);
    void displayFamilyOf(Person& p);
    Person* FindEldestGrandsonOf(Person* grandfather);
    void displayAncestorsOf(Person& p);
};
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
FamilyTree::~FamilyTree() {
    delete foreFather;
}

void FamilyTree::registerChild(Person& p, Person& child) {
    if (p.getNoOfChildren() >= 3) {
        cout << "A person can only have 3 children!" << endl;
        return;
    }
    if (p.getChildren() == nullptr) {
        p.setChildren(new Person * [3] { nullptr, nullptr, nullptr });
    }
    p.getChildren()[p.getNoOfChildren()] = new Person(child);
    p.setNoOfChildren(p.getNoOfChildren() + 1);
    child.setNoOfChildren(0); // Reset the child's number of children to 0
}

Person* FamilyTree::findYoungestChildOf(Person& p) {
    Person* youngest = nullptr;
    Person** children = p.getChildren();
    for (int i = 0; i < p.getNoOfChildren(); i++) {
        int curr_age = children[i]->calAge(2023);
        if (youngest == nullptr || curr_age < youngest->calAge(2023)) {
            youngest = children[i];
        }
    }
    return youngest;
}

void FamilyTree::displayFamilyOf(Person& p) {
    cout << "\t\t\t\t\t_________________________________" << endl;
    cout << "\t\t\t\t\t|Family Information of " << p.getName() << "|" << endl;
    cout << "\t\t\t\t\t|_______________________________|" << endl;
    Person** children = p.getChildren();
    for (int i = 0; i < p.getNoOfChildren(); i++) {
        if (children[i] != nullptr) {
            children[i]->displayData();
            cout << endl;
        }
    }
}

Person* FamilyTree::FindEldestGrandsonOf(Person* grandfather) {
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

void FamilyTree::displayAncestorsOf(Person& p) {
    // cout << "\t" << p.getName() << ":" << endl;

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

//MAIN
int main()
{
    //cout << "\033[35m" << endl;
    cout << "\t\t\t\t\t__________________________" << endl;
    cout << "\t\t\t\t\t|Forefather's Information|" << endl;
    cout << "\t\t\t\t\t|________________________|" << endl;
    cout << endl;

    Person* foreFather = new Person("Ghazanfar", 'M', 25, 1, 1975);
    FamilyTree f1(foreFather);

    Person p1("Tashfeen", 'M', 8, 11, 2004);
    Person p2("Laiba", 'F', 16, 6, 2003);
    Person p6("Shubu", 'F', 16, 6, 2001);
    //Hamaray Bachay
    Person p3("Wishma", 'F', 1, 1, 2019); //Tashi
    Person p4("Momin", 'M', 2, 1, 2020); //Tashi
    Person p5("Ayesha", 'F', 1, 7, 2021);//laiba
    Person p7("Hassan", 'M', 1, 3, 2011);//shubu
    Person p8("Amna", 'F', 1, 1, 2023);  //laiba
    f1.registerChild(p1, p3);
    f1.registerChild(p1, p4);
    f1.registerChild(p2, p5);
    f1.registerChild(p2, p8);
    f1.registerChild(p6, p7);
    //Papa kay
    f1.registerChild(*foreFather, p1);
    f1.registerChild(*foreFather, p2);
    f1.registerChild(*foreFather, p6);

    foreFather->displayData();

    Person* youngestChild = f1.findYoungestChildOf(*foreFather);
    if (youngestChild != nullptr) {
        cout << "Youngest Child                   : " << youngestChild->getName() << endl;
    }
    cout << "__________________________________________________________________________________" << endl;
    f1.displayFamilyOf(*foreFather);

    Person* eldestGrandson = f1.FindEldestGrandsonOf(foreFather);
    if (eldestGrandson != nullptr)
    {
        cout << "__________________________________________________________________________________" << endl << endl;
        cout << "Eldest Grandson                  : " << eldestGrandson->getName() << endl << endl;
        cout << "__________________________________________________________________________________" << endl << endl;
    }

    cout << "'\n\t\t\t\t\t-------->Family Tree<---------" << endl << endl;
    f1.displayAncestorsOf(*foreFather);

    // Cleanup
    //delete foreFather;

    return 0;
}
*/