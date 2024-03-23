/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 3
Question 4
/
#pragma once
#include <iostream>
using namespace std;



//````````````````````````````````````````````````` BYTE CLASS ```````````````````````````````````````
class Byte
{
private:

    string value;

public:


    Byte();


    Byte(const string& b);


    Byte operator+(const Byte& b) const;


    Byte operator-(const Byte& a) const;


    Byte operator||(const Byte& b) const;


    Byte operator&&(const Byte& a) const;


    bool operator==(const Byte& a) const;


    friend ostream& operator<<(ostream& os, const Byte& byte);


};


//```````````````````````````````````````````` DEFAULT CONSTRUCTOR ````````````````````````````````````````
Byte::Byte()
{
    this->value = "00000000";
}

















//```````````````````````````````````````````` PARAMETER CONSTRUCTOR ````````````````````````````````````````
Byte::Byte(const string& b)
{
    this->value = b;
}


















//`````````````````````````````````````````````````` OPERATOR + ```````````````````````````````````````````````
Byte Byte::operator+(const Byte& b) const 
{
    string final;



    for (int i = 0; i < 8; i++) 
    
    {
        if (value[i] == '1' || b.value[i] == '1') 
        
        {
            final += '1';
        }


        else 
        {
            final += '0';
        }
    }


    return Byte(final);
}

















//`````````````````````````````````````````````````` OPERATOR - ```````````````````````````````````````````````
Byte Byte::operator-(const Byte& a) const 
{
   
    
    string final;


    for (int i = 0; i < 8; i++) 
    
    {
        if (value[i] == '1' && a.value[i] == '1')
        
        {


            final += '0';
        }


        else
        
        {
            final += value[i];
        }
    }


    return Byte(final);
}


















//`````````````````````````````````````````````````` OPERATOR || ```````````````````````````````````````````````
Byte Byte::operator||(const Byte& b) const 

{
    string final;
    for (int i = 0; i < 8; i++) 
    
    {
        if (value[i] == '1' || b.value[i] == '1') 
        
        {
            final += '1';
        }
        else 
        
        {
            final += '0';
        }
    }


    return Byte(final);
}
















//`````````````````````````````````````````````````` OPERATOR && ```````````````````````````````````````````````
Byte Byte::operator&&(const Byte& a) const 

{
    string final;


    for (int i = 0; i < 8; i++) 
    
    {
        if (value[i] == '1' && a.value[i] == '1') 
        
        {
            final += '1';
        }
        else 
        
        {
            final += '0';
        }
    }


    return Byte(final);
}















//`````````````````````````````````````````````````` OPERATOR == ```````````````````````````````````````````````
bool Byte::operator==(const Byte& a) const 

{
    return value == a.value;
}
















//`````````````````````````````````````````````````````` OSTREAM```````````````````````````````````````````````
ostream& operator<<(ostream& os, const Byte& b)

{
    os << b.value;

    return os;
}




















//````````````````````````````````````````````````````````` BINARY STORE CLASS `````````````````````````````````````
class BinaryStore
{
private:
    static const int mux = 50;


    string adres[mux];


    Byte bytes[mux];


    int size;

public:
    BinaryStore();



    void operator+=(const string& address);



    void Add(const string& a, const Byte& b);



    Byte Get(const string& a) const;



    friend ostream& operator<<(ostream& output, const BinaryStore& obj);
};




















//```````````````````````````````````````````` DEFAULT CONSTRUCTOR ````````````````````````````````````````

BinaryStore::BinaryStore() 
{
    size = 0;
}























//````````````````````````````````````````````  OPERATOR + ````````````````````````````````````````````````````
void BinaryStore::operator+=(const string& a) 
{
    if (size < mux) 
    
    {
        adres[size] = a;


        bytes[size] = Byte();


        size++;
    }
}



















//````````````````````````````````````````````  ADD FUNCTION  ````````````````````````````````````````````````````
void BinaryStore::Add(const string& a, const Byte& b) 
{
    for (int i = 0; i < size; i++) 
    {
        if (adres[i] == a) 

        {
            bytes[i] = b;

            return;

        }
    }
}














//````````````````````````````````````````````  GET FUNCTION ````````````````````````````````````````````````````
Byte BinaryStore::Get(const string& a) const 
{
    for (int i = 0; i < size; i++) 
    {
        if (adres[i] == a) 
        {
            return bytes[i];
        }
    }


    return Byte();
}
























//`````````````````````````````````````````````````````` OSTREAM```````````````````````````````````````````````
ostream& operator<<(ostream& output, const BinaryStore& obj) 
{
    for (int i = 0; i < obj.size; i++) 
    {
        output << "Address will be: " << obj.adres[i] << endl;

        output << "Byte will be   : " << obj.bytes[i] << endl;
    }
    return output;
}