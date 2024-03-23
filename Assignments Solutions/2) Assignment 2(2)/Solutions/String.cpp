/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 2
/
#include "String.h"
#include<iostream>
using namespace std;
String::String()
{
    data = NULL;
    length = 0;
}

String::String(int size)
{
    this->data = new char[size];
    this->length = size;
}

String::String(const char* str)
{
    int str_length = 0;
    while (str[str_length] != '\0')
    {
        str_length++;
    }
    this->length = str_length;
    this->data = new char[length + 1];
    for (int i = 0; i <= length; i++)
    {
        this->data[i] = str[i];
    }
}

String::String(const String& str)
{
    this->length = str.length;
    this->data = new char[length + 1];
    for (int i = 0; i <= length; i++)
    {
        this->data[i] = str.data[i];
    }
}

String::~String()
{
    delete[] data;
}

int String::strLength() const
{
    return length;
}

void String::clear()
{
    delete[] data;
    data = NULL;
    length = 0;
}

bool String::empty() const
{
    return (length == 0);
}

int String::charAt(char c) const
{
    for (int i = 0; i < length; i++)
    {
        if (data[i] == c)
        {
            return i;
        }
    }
    return -1;
}

bool String::equals(const char* str) const
{
    for (int i = 0; i < length; i++)
    {
        if (data[i] != str[i])
            return false;
    }
    return (str[length] == '\0');
}
//uppercase hai agr tou ignore kara bs length aur alphabet same hona chachia
bool String::equalsIgnoreCase(const char* str) const
{
    int str_length = 0;
    while (str[str_length] != '\0')
    {
        str_length++;
    }
    if (length != str_length)
    {
        return false;
    }
    for (int i = 0; i < length; i++)
    {
        if (toupper(data[i]) != toupper(str[i]))
            return false;
    }
    return true;
}

const char* String::get_data() const
{
    return data;
}
//finding substring
char* String::substring(const char* sub_str, int startIndex) const
{
    int sub_str_length = 0;
    while (sub_str[sub_str_length] != '\0')
    {
        sub_str_length++;
    }

    int i = startIndex;
    while (data[i] != '\0')
    {
        int j = 0;
        while (data[i + j] == sub_str[j])
        {
            if (sub_str[j + 1] == '\0')
            {
                char* result = new char[length - startIndex - j + 1];
                for (int k = 0; k < length - startIndex - j; k++)
                {
                    result[k] = data[i + k];
                }
                result[length - startIndex - j] = '\0';
                return result;
            }
            j++;
        }
        i++;
    }

    return NULL;
}
//first and last words are entered by the user
char* String::substring(const char* substr, int startIndex, int endIndex) const
{
    int substrLen = 0;
    while (substr[substrLen] != '\0')
    {
        substrLen++;
    }

    int index = startIndex;
    int dataLen = length;
    endIndex = (endIndex < dataLen) ? endIndex : dataLen - 1;

    while (index <= endIndex - substrLen + 1)
    {
        int i = 0;
        while (i < substrLen && data[index + i] == substr[i])
        {
            i++;
        }

        if (i == substrLen)
        {
            int resultLen = endIndex - index + 1;
            char* result = new char[resultLen + 1];
            for (int j = 0; j < resultLen; j++)
            {
                result[j] = data[index + j];
            }
            result[resultLen] = '\0';
            return result;
        }

        index++;
    }

    return NULL;
}