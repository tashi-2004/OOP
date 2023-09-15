/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 2
*/
#include<iostream>
#include "Sandwiches.h"
using namespace std;
Sandwiches::Sandwiches()
{
    name = nullptr;
    filling = nullptr;
    size = nullptr;
    is_Ready = false;
    price = 0.0;
}
Sandwiches::Sandwiches(const char* fillingVal, double priceVal)
{
    name = nullptr;
    filling = const_cast<char*>(fillingVal);
    size = nullptr;
    is_Ready = false;
    price = priceVal;
}

Sandwiches::Sandwiches(const char* fillingVal, double priceVal, const char* nameVal, const char* sizeVal, bool ready_status)
{
    name = const_cast<char*>(nameVal);
    filling = const_cast<char*>(fillingVal);
    size = const_cast<char*>(sizeVal);
    is_Ready = ready_status;
    price = priceVal;
}
//copy constructor
Sandwiches::Sandwiches(const Sandwiches& sandwich)
{
    name = static_cast<char*>(sandwich.name);
    filling = static_cast<char*>(sandwich.filling);
    size = static_cast<char*>(sandwich.size);
    is_Ready = sandwich.is_Ready;
    price = sandwich.price;
}
//setter/getters
void Sandwiches::setFilling(const char* fillingVal)
{
    filling = const_cast<char*>(fillingVal);
}

void Sandwiches::setPrice(double priceVal)
{
    price = priceVal;
}

void Sandwiches::setName(const char* nameVal)
{
    name = const_cast<char*>(nameVal);
}

void Sandwiches::setSize(const char* sizeVal)
{
    size = const_cast<char*>(sizeVal);
}

const char* Sandwiches::getFilling()
{
    return filling;
}

double Sandwiches::getPrice()
{
    return price;
}

const char* Sandwiches::getName()
{
    return name;
}

const char* Sandwiches::getSize()
{
    return size;
}
//makesandwich function. agr wo ready ho aur filling beh NULL na ho, tou true return
int Sandwiches::makeSandwich()
{
    if (filling != nullptr && is_Ready) 
    {
        return true;
    }
    else
    {
        return false;
    }
}
//bs check kiya kayy ready hai ya nahi
bool Sandwiches::check_status()
{
    return is_Ready;
}
//Display ka function
void Sandwiches::display()
{
    cout << "Name   : " << name << endl;
    cout << "Filling: " << filling << endl;
    cout << "Size   : " << size << endl;
    cout << "Price  : PKR " << price << endl;
    cout << "Status : " << is_Ready << endl;
    cout << endl << endl;
    cout << "_____________________________________________________________________________________" << endl << endl;
}