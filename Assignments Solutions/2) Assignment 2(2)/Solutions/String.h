/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 2
*/
#pragma once
#include<iostream>
using namespace std;
class String
{
private:
    char* data;
    int length;
public:
    String();
    String(int size);
    String(const char* str);
    String(const String& str);
    ~String();
    int strLength() const;
    void clear();
    bool empty() const;
    int charAt(char c) const;
    const char* get_data() const;
    bool equals(const char* str) const;
    bool equalsIgnoreCase(const char* str) const;
    char* substring(const char* sub_str, int startIndex) const;
    char* substring(const char* substr, int startIndex, int endIndex) const;
};