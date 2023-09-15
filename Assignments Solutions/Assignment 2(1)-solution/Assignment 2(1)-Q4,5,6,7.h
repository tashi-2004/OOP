//i222041
//Tashfeen Abbasi
//BS_DS_D


#pragma once
#include <iostream>
using namespace std;

//---- Q-4
int countd(int n, int m) {
    if (n == 0)
        return 0;
    if (n % 10 == m)
        return 1 + countd(n / 10, m);
    else
        return 0 + countd(n / 10, m);
}

int countDigits(int n, int m) {
    if (n == 0)
        if (m == 0)
            return 1;
        else
            return 0;
    return countd(n, m) + countDigits(n-1, m);
}





//i222041
//Tashfeen Abbasi
//BS_DS_D


//--- Q-5

int multiply(int x, int y) {
    if (y == 0) {
        return 0;
    }
    if (y % 2 == 0) {
        return multiply(x << 1, y >> 1);
    }
    return x + multiply(x << 1, y >> 1);
}

int power(int base, int exponent, int extra = 0) {
    if (exponent == 0) {
        return 1;
    }
    if (exponent % 2 == 0) {
        int x = power(base, exponent >> 1, extra);
        return multiply(x, x);
    }
    int x = power(base, exponent - 1, extra);
    return multiply(base, x);
}





//i222041
//Tashfeen Abbasi
//BS_DS_D


//--- Q-6
bool checks(char* str1, char* str2)
{
    if (*str1 == '\0' && *str2 == '\0') {
        return true;
    }
    else if (*str2 == '\0') {
        return true;
    }
    else if (*str1 != *str2) {
        return false;
    }
    else {
        return checks(str1 + 1, str2 + 1);
    }
}

bool isSubstr(char* str1, char* str2) {
    if (*str2 == '\0') {
        return true;
    }
    else if (*str1 == '\0') {
        return false;
    }
    else if (*str1 == *str2) {
        if (checks(str1, str2)) {
            return true;
        }
    }
    return isSubstr(str1 + 1, str2);
}







//i222041
//Tashfeen Abbasi
//BS_DS_D

//--- Q-7
int toBinary(int num, int extra = 0) {
    if (num == 0)
        return 0;
    return toBinary(num / 2, extra) * 10 + num % 2;
}
string toHexa(int num, int extra = 0) {
    if (num == 0)
        return "0";
    char c;
    if (num % 16 < 10)
        c += (num % 16) + 48;
    else
        c += (num % 16) + 55;
    if (num / 16 > 0)
        return toHexa(num / 16, extra) + c;
    else
        return string(1, c);
}
int toOctal(int num, int extra = 0) {
    if (num == 0)
        return 0;
    return toOctal(num / 8, extra) * 10 + num % 8;
}