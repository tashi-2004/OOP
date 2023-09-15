/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 2
*/
#pragma once
#include<iostream>
using namespace std;
//``````````````````````````````````DATE CLASS````````````````````````````````````````
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
//```````````````````````````````````PERSON CLASS```````````````````````````````````````
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
//```````````````````````````````````FAMILY CLASS````````````````````````````````````````````
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