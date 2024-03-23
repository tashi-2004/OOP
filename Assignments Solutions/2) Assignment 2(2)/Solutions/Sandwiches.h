/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 2
*/
#pragma once
#include <iostream>
using namespace std;
class Sandwiches
{
    char* name;
    char* filling;
    char* size;
    bool is_Ready;
    double price;

public:
    Sandwiches();
    Sandwiches(const char* fillingVal, double priceVal);
    Sandwiches(const char* fillingVal, double priceVal, const char* nameVal, const char* sizeVal, bool ready_status);
    Sandwiches(const Sandwiches& sandwich);
    void setFilling(const char* fillingVal);
    void setPrice(double priceVal);
    void setName(const char* nameVal);
    void setSize(const char* sizeVal);
    const char* getFilling();
    double getPrice();
    const char* getName();
    const char* getSize();
    int makeSandwich();
    bool check_status();
    void display();
};
