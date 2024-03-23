/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 3
Question 2
/
#pragma once
#include<iostream>
#include<sstream>
using namespace std;






//````````````````````````````````````````````````````````DATE``````````````````````````````````````````````````
class Date
{

private:


    int year;


    int month;


    int day;


public:
    Date();


    Date(int year, int month, int day);



    int get_year() const;



    void set_year(int Y);



    int get_month() const;



    void set_month(int M);



    int get_day() const;



    void set_day(int D);




    Date operator=(const Date& D);



    Date operator+(int day);




    Date operator-(int day);




    Date operator+(const Date& d);



    Date operator-(const Date& d);



    bool operator>(Date& d);



    bool operator>=(Date& d);



    bool operator<(Date& d);



    bool operator<=(Date& d);



    bool operator!=(Date& d);



    bool operator==(Date& d);



    bool isLeapYear();



    string toString();



    friend ostream& operator<<(ostream& output, Date& d);
};


















//````````````````````````````````````````````````DATE CONSTRUCTOR`````````````````````````````````````````````````
Date::Date()
{
    year = 0;
    month = 0;
    day = 0;
}
























//````````````````````````````````````````````````` PARAMETERIZED CONSTRUCTOR `````````````````````````````````````
Date::Date(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}
































//`````````````````````````````````````````````````SETTER/GETTERS````````````````````````````````````````````````
int Date::get_year() const
{
    return year;
}

void Date::set_year(int Y)
{
    this->year = Y;
}
int Date::get_month() const
{
    return month;
}
void Date::set_month(int M)
{
    this->month = M;
}
int Date::get_day() const
{
    return day;
}
void Date::set_day(int D)
{
    this->day = D;
}



































//``````````````````````````````````````````````````````OPERATOR = ````````````````````````````````````````````````````````
Date Date ::operator=(const Date& D)
{
    this->year = D.year;
    this->month = D.month;
    this->day = D.day;
    return *this;
}




































//````````````````````````````````````````````````OPERATOR + INT IN PARAMETER `````````````````````````````````````````````````
Date Date:: operator+(int day)
{
    Date d;
    d.day = this->day + day;
    d.month = this->month;
    d.year = this->year;
    while (d.day > 31 || (d.month == 2 && d.day > 29))
    {
        //Even months have 30 days 
        if (d.month % 2 == 0 && d.day > 30)
        {
            d.day -= 30;
            d.month++;
        }
        else if (d.month == 2 && d.day > 29)
        {
            d.day -= 29;
            d.month++;
        }
        else
        {
            d.day -= 31;
            d.month++;
        }
    }
    return d;
}




































//``````````````````````````````````````````````````````OPERATOR - INT IN PARAMETER```````````````````````````````````````````````````````
Date Date::operator-(int day)
{
    Date q;
    q.day = this->day - day;
    q.month = this->month;
    q.year = this->year;
    while (q.day > 31 || (q.month == 2 && q.day > 29))
    {
        //Even months have 30 days 
        if (q.month % 2 == 0 && q.day > 30)
        {
            q.day -= 30;
            q.month++;
        }
        else if (q.month == 2 && q.day > 29)
        {
            q.day -= 29;
            q.month++;
        }
        else
        {
            q.day -= 31;
            q.month++;
        }
    }
    return q;
}
































//``````````````````````````````````````````````````````OPERATOR + FOR OBJECT IN PARAMETER````````````````````````````````````````````
Date Date::operator+(const Date& d)
{
    this->year += d.year;
    this->month += d.month;
    this->day += d.day;
    return *this;
}































//``````````````````````````````````````````````````````OPERATOR - FOR OBJECT IN PARAMETER``````````````````````````````````````````
Date Date::operator-(const Date& d)
{
    this->year -= d.year;
    this->month -= d.month;
    this->day -= d.day;
    return *this;
}






























//`````````````````````````````````````````````````````````````OPERATOR > ````````````````````````````````````````````````````````````
bool Date::operator>(Date& d)
{
    if (day > d.day && month > d.month && year > d.year)
    {
        return true;
    }
    else
        return false;
}

































//````````````````````````````````````````````````````````````OPERATOR >= ````````````````````````````````````````````````````````````
bool Date::operator>=(Date& d)
{
    if (day >= d.day && month >= d.month && year >= d.year)
    {
        return true;
    }
    else
        return false;
}

































//```````````````````````````````````````````````````````````````````OPERATOR <``````````````````````````````````````````````````````
bool Date::operator<(Date& d)
{
    if (day < d.day && month < d.month && year < d.year)
    {
        return true;
    }
    else
        return false;
}



































//``````````````````````````````````````````````````````````````````OPERATOR <= ```````````````````````````````````````````````````
bool Date::operator<=(Date& d)
{
    if (day <= d.day && month <= d.month && year <= d.year)
    {
        return true;
    }
    else
        return false;
}

































//``````````````````````````````````````````````````````````````````OPERATOR != ``````````````````````````````````````````````````````
bool Date::operator!=(Date& d)
{
    if (day != d.day && month != d.month && year != d.year)
    {
        return true;
    }
    else
        return false;
}

































//```````````````````````````````````````````````````````````````````OPERATOR == ```````````````````````````````````````````````````````
bool Date::operator==(Date& d)
{
    if (day == d.day && month == d.month && year == d.year)
    {
        return true;
    }
    else
        return false;
}
































//````````````````````````````````````````````````````````````````````LEAP YEAR `````````````````````````````````````````````````````````
bool Date::isLeapYear()
{
    if ((year % 4 == 0 && year != 100) || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}




























//````````````````````````````````````````````````````````````````````````TO STRING ```````````````````````````````````````````````````````
string Date::toString()
{
    stringstream ss;
    ss << year << "/" << month << "/" << day;
    return ss.str();
}
































//`````````````````````````````````````````````````````````````````````````OSTREAM``````````````````````````````````````````````````````````
ostream& operator<<(ostream& output, Date& d)
{
    output << "Year will be: " << d.year << endl;
    output << "Month will be: " << d.month << endl;
    output << "Day will be: " << d.day << endl;
    return output;
}