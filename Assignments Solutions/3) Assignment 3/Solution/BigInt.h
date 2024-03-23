/*
Tashfeen Abbasi
i222041
OOP-C
Assignment 3
Question 3
/
//NOTE:
       //==>    stoi is used to convert int into string
       //==> sstream is used to convert string into int
#pragma once
#include <iostream>
#include <sstream>
using namespace std;





//``````````````````````````````````````````````````````````````````````` BigInt Class ``````````````````````````````````````````````````````
class BigInt
{
private:
    string value;

public:



    //If declared outside, compiler is giving error
    BigInt(int val = 0)
    {
        stringstream ss;
        ss << val;
        this->value = ss.str();
    }







    BigInt(const string& text);




    BigInt(const BigInt& copy);




    BigInt operator+(const BigInt& val) const;




    BigInt operator+(int val) const;



    BigInt operator-(const BigInt& val) const;




    BigInt operator-(int val) const;




    BigInt operator*(const int val) const;




    BigInt operator+=(const BigInt& rhs);




    BigInt operator-=(const BigInt& rhs);





    BigInt operator*= (const int val);




    bool operator==(const BigInt& val) const;





    bool operator!=(const BigInt& val) const;




    bool operator<(const BigInt& val) const;





    bool operator<=(const BigInt& val) const;





    bool operator>(const BigInt& val) const;





    bool operator>=(const BigInt& val) const;





    BigInt& operator++();




    BigInt operator++(int);




    BigInt& operator--();




    BigInt operator--(int);





    operator string();






    ~BigInt();






    friend ostream& operator<<(ostream& output, const BigInt& val);





    friend  istream& operator>>(istream& input, BigInt& val);



};









BigInt::BigInt(const string& text)
{
    this->value = text;
}












BigInt::BigInt(const BigInt& copy)
{
    this->value = copy.value;
}














//``````````````````````````````````````````````````````````````````` OPERATOR +  with object as a parameter````````````````````````````````````````
BigInt BigInt::operator+(const BigInt& val) const
{
    string original = this->value;


    string parameter = val.value;


    int carry = 0;


    string sum;

    int original_length = original.length();



    int parameter_length = parameter.length();


    if (original_length > parameter_length)
    {
        parameter = string(original_length - parameter_length, '0') + parameter;
    }



    else
    {
        original = string(parameter_length - original_length, '0') + original;
    }

    for (int i = original.length() - 1; i >= 0; i--)
    {
        int original_ = original[i] - '0';


        int parameter_ = parameter[i] - '0';


        int sum_ = original_ + parameter_ + carry;


        carry = sum_ / 10;


        sum = static_cast<char>(sum_ % 10 + '0') + sum;
    }

    if (carry > 0)


        sum = static_cast<char>(carry + '0') + sum;


    BigInt final;


    final.value = sum;


    return final;
}

























//```````````````````````````````````````````````````````````````````````` OPERATOR + with int as a parameter````````````````````````````````````````````
BigInt BigInt:: operator+(int val) const
{
    stringstream ss;
    ss << val;
    string convert = ss.str();
    BigInt final;
    final = *this + BigInt(convert);//+ operator ko call karay ga
    return final;
}




























//``````````````````````````````````````````````````````````````````````` OPERATOR -  with object as a parameter``````````````````````````````````````
BigInt BigInt::operator-(const BigInt& val) const
{
    string original = this->value;



    string parameter = val.value;



    int borrow = 0;


    string difference;

    int original_length = original.length();



    int parameter_length = parameter.length();



    if (original_length > parameter_length)
    {
        parameter = string(original_length - parameter_length, '0') + parameter;
    }




    else
    {
        original = string(parameter_length - original_length, '0') + original;
    }





    for (int i = original.length() - 1; i >= 0; i--)
    {
        int original_ = original[i] - '0';



        int parameter_ = parameter[i] - '0';


        int diff_ = original_ - parameter_ - borrow;

        if (diff_ < 0)
        {
            diff_ += 10;
            borrow = 1;
        }


        else
        {
            borrow = 0;
        }

        difference = static_cast<char>(diff_ + '0') + difference;
    }



    BigInt final;


    final.value = difference;


    return final;
}



























//```````````````````````````````````````````````````````````````````````````````` OPERATOR - with int as a parameter````````````````````````````````````````````
BigInt BigInt::operator-(int val) const
{
    stringstream ss;
    ss << val;
    string convert = ss.str();
    BigInt final;
    final = *this - BigInt(convert);
    return final;
}





























//``````````````````````````````````````````````````````````````````````````````````````````` OPERATOR * ````````````````````````````````````````````````````````````
BigInt BigInt::operator*(int val) const
{

    string original = this->value;



    int carry = 0;


    string product;

    for (int i = original.length() - 1; i >= 0; i--)
    {
        int original_ = original[i] - '0';


        int product_ = original_ * val + carry;



        carry = product_ / 10;



        product = static_cast<char>(product_ % 10 + '0') + product;
    }



    if (carry > 0)


        product = static_cast<char>(carry + '0') + product;

    BigInt final;


    final.value = product;


    return final;
}


















//`````````````````````````````````````````````````````````````````````````` OPERATOR += ``````````````````````````````````````````````````````
BigInt BigInt::operator+=(const BigInt& rhs)
{
    *this = *this + rhs;
    return *this;
}

















//`````````````````````````````````````````````````````````````````````````` OPERATOR -= ````````````````````````````````````````````````````````````
BigInt BigInt::operator-=(const BigInt& rhs)
{
    *this = *this - rhs;
    return *this;
}


















//`````````````````````````````````````````````````````````````````````````` OPERATOR *= ``````````````````````````````````````````````````````
BigInt BigInt::operator*=(const int val)
{
    *this = *this * val;
    return *this;
}

















//`````````````````````````````````````````````````````````````````````````` OPERATOR == ````````````````````````````````````````````````````````````
bool BigInt::operator==(const BigInt& val) const
{

    return this->value == val.value;
}




















//`````````````````````````````````````````````````````````````````````````` OPERATOR != ``````````````````````````````````````````````````````
bool BigInt::operator!=(const BigInt& val) const
{
    return  this->value != val.value;
}
















//`````````````````````````````````````````````````````````````````````````` OPERATOR < ````````````````````````````````````````````````````````````
bool BigInt::operator<(const BigInt& val) const
{
    return  this->value < val.value;
}














//`````````````````````````````````````````````````````````````````````````` OPERATOR <= ``````````````````````````````````````````````````````
bool BigInt::operator<=(const BigInt& val) const
{
    return  this->value <= val.value;
}


















//`````````````````````````````````````````````````````````````````````````` OPERATOR > ````````````````````````````````````````````````````````````
bool BigInt::operator>(const BigInt& val) const
{
    return  this->value > val.value;
}














//`````````````````````````````````````````````````````````````````````````` OPERATOR >= ``````````````````````````````````````````````````````
bool BigInt::operator>=(const BigInt& val) const
{
    return  this->value >= val.value;
}


















//`````````````````````````````````````````````````````````````````````````` ++ OPERATOR  ````````````````````````````````````````````````````````````
BigInt& BigInt::operator++()
{
    int current_value = stoi(value);
    current_value++;

    stringstream ss;
    ss << current_value;
    value = ss.str();

    return *this;
}

















//`````````````````````````````````````````````````````````````````````````` OPERATOR ++ ``````````````````````````````````````````````````````
BigInt BigInt::operator++(int)
{
    BigInt temp(*this);
    int current_value = stoi(value);
    current_value++;
    stringstream ss;
    ss << current_value;
    value = ss.str();
    return temp;
}



















//`````````````````````````````````````````````````````````````````````````` -- OPERATOR  ````````````````````````````````````````````````````````````
BigInt& BigInt::operator--()
{
    int current_value = stoi(value);
    current_value--;

    stringstream ss;
    ss << current_value;
    value = ss.str();
    return *this;
}


















//````````````````````````````````````````````````````````````````````````` OPERATOR --  ``````````````````````````````````````````````````````
BigInt BigInt::operator--(int)
{
    BigInt temp(*this);


    int current_value = stoi(value);


    current_value--;
    stringstream ss;
    ss << current_value;
    value = ss.str();
    return temp;
}

















BigInt::operator string()
{
    return this->value;
}









BigInt::~BigInt()
{}




















//``````````````````````````````````````````````````````` OSTREAM ``````````````````````````````````````````
ostream& operator<<(ostream& output, const BigInt& val)
{
    output << "Value will be ==> " << val.value << endl;
    return output;
}













//```````````````````````````````````````````````````````` ISTREAM ``````````````````````````````````````````````
istream& operator>>(istream& input, BigInt& val)
{
    cout << "Enter the values ==> ";
    input >> val.value;
    cout << endl;
    return input;
}

