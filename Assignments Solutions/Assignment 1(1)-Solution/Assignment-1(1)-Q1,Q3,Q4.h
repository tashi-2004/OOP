#pragma once
#include<iostream>
#include<iomanip>
using namespace std;


// question one
bool verifyPassword(const char* password) {
	int length = 0;
	while (password[length] != '\0')
	{
		length++;
	}
	bool flag = false;
	bool flag1 = false;
	bool flag2 = false;

	for (int i = 0; i < length; i++)
	{
		if (password[i] >= 'a' && password[i] <= 'z')
			flag = true;
		else if (password[i] >= 'A' && password[i] <= 'Z')
			flag1 = true;
		else if (password[i] >= '0' && password[i] <= '9')
			flag2 = true;
	}
	if (flag == true && flag1 == true && flag2 == true && length > 6)
		return true;

	return false;



}



//q///////////////////////////////////question two implemwntation
int** generateMagicSquare(int n)
{



	/// <summary>
	/// lets dynamicaaly generate the array
	int** square = new int* [n];
	for (int i = 0; i < n; i++)
		square[i] = new int[n];


	for (int i = 0; i < n; i++)
	{
		int j = 0;
		while (j < n)
		{
			square[i][j] = 0;
			j++;
		}
	}
	
	//lets fix the counter for the variabel in c++
	int i = 0; int j = n / 2; int k = 1;

	//let inizialized the varaible because it is good practice
	square[0][j] = k;

	//lets have a while loop
	k = 2;
	while (k <= n * n)
	{

		int new_var1 = ((i - 1 + n) % n); int new_var2 = (j + 1) % n;
		if (square[new_var1][new_var2] == 0)
		{
			i = new_var1;
			j = new_var2;
		}
		else
			i = (i + 1) % n;
		square[i][j] = k;
		k++;

	}

	
	return square;
}
////////////////////question 3


/// <summary>
/// ghnexeyh jyjv 
/// </summary>
/// <param name="s1"></param>
/// <param name="s2"></param>
/// <returns></returns>

char* Strcpy1(char* s1, const char* s2)
{/*Copies string s2 into array s1.
The value of s1 is returned.*/
/*char* s2 = "tashi";
char* s1 = new char;*/
	int length = 0;
	while (s2[length] != '\0')
		length++;
	for (int i = 0; i < length; i++)
		s1[i] = s2[i];
	for (int i = length; i < 100; i++)
		s1[i] = '\0';
	return s1;

}




int Strlen(char* s1)

{
	int length = 0;
	while (s1[length] != '\0')
	{
		length++;
	}
	return length;
}
char* strncpy1(char* s1, const char* s2, size_t n)
//  Copies at most n characters of string s2 into array s1.
//  The value of s1 is returned.*/
{

	int length = 0;

	for (int i = 0; i < n; i++)
		s1[i] = s2[i];


	return s1;
}

char* StrCat1(char* s1, const char* s2)
/*Appends string s2 to array s1.
3 The first character of s2 overwrites
4 the terminating null character of s1.
5 The value of s=s1 is returned.*/
{
	int count = 0;
	while (s1[count] != '\0')
		count++;

	int count1 = 0;
	while (s2[count1] != '\0')
		count1++;

	int length2 = count + count1;
	int j = 0;
	char* arr = new char[100];
	for (int i = 0; i < 100; i++)
		arr[i] = NULL;
	for (int i = 0; i < length2; i++)
	{
		if (i < count)
		{
			arr[i] = s1[i];
		}
		else if (i >= count)
		{
			arr[i] = s2[j];
			j++;
		}
	}



	for (int i = 0; i < 100; i++)
	{
		s1[i] = arr[i];
	}

	return s1;
}
char* StrnCat1(char* s1, const char* s2, size_t n)
/*Appends at most n characters of string s2 to array s1.
12 The first character of s2 overwrites the terminating
13 null character of s1. The
14 value of s1 is returned.*/
{
	int count = 0;
	while (s1[count] != '\0')
		count++;

	int count1 = 0;
	while (s2[count1] != '\0')
		count1++;

	int length2 = count + count1;
	int j = 0;
	char* arr = new char[100];
	for (int i = 0; i < 100; i++)
		arr[i] = NULL;
	for (int i = 0; i < n; i++)
	{
		if (i < count)
		{
			arr[i] = s1[i];
		}
		else if (i >= count)
		{
			arr[i] = s2[j];
			j++;
		}
	}



	for (int i = 0; i < 100; i++)
	{
		s1[i] = arr[i];
	}

	return s1;


}

int StrCmp1(const char* s1, const char* s2)
/*Compares the string s1 with the string s2 .
21 The function returns 0,
22 less than 0 or greater than 0 if s1 is equal to,
23 less than or greater
24 than s2 , respectively.*/
{
	int count = 0;
	while (s1[count] != '\0')
		count++;

	int count1 = 0;
	while (s2[count1] != '\0')
		count1++;
	int index = 0;
	if (count == count1) {
		for (int i = 0; i < count; i++)
		{
			if (s1[i] == s2[i])
				index++;

		}

	}
	if (index == count)
		return 0;
	else if (count < count1)
		return 1;
	else
		return -1;




}
int StrnCmp1(const char* s1, const char* s2, size_t n)
/*
27 Compares up to n characters of the string
28 s1 with the string s2 .
29 The function returns 0 ,
30 less than 0 or greater than 0 if s1 is equal
31 to, less than or greater than s2 , respectively.
32 */
{



	int count = 0;
	while (s1[count] != '\0')
		count++;

	int count1 = 0;
	while (s2[count1] != '\0')
		count1++;
	int index = 0; int j = 0;
	if (count == count1) {
		for (int i = 0; i <n; i++)
		{
			if (s1[i] == s2[i])
				index++;

		}

	}
	if (index == count)
		return 0;
	else if (count < count1)
		return 1;
	else
		return -1;
}


int StrFind(char* s1, char* s2)
/*
44 Searches the string s1 for the first occurrence
45 of the string s2 and returns its starting index,
46 if s2 not found returns -1.
47 */
{

	int count = 0;
	while (s1[count] != '\0')
		count++;

	int count1 = 0;
	while (s2[count1] != '\0')
		count1++;

	int index = 0; int position = 0; int j = 0;
	for (int i = 0; i < count; i++)
	{
		if (s1[i] == s2[j])
		{
			index++;
			position = i;
			break;
		}
		


	}
	if (index == 1)
		return position;
	else
		return -1;


}



char* SubStr(char* s1, int pos, int len)
/*
52 This function returns a newly constructed
53 string variable with its value initialized
54 to a copy of a substring of this variable.
55
56 The substring is the portion of the string
57 that starts at character position ``posâ€™â€™ and
58 spans ``lenâ€™â€™ characters (or until the end
59 of the string, whichever comes first).*/
{
	
	char* arr = new char[len+1];
	
	 int j = 0;
	 int i = 0;
	for ( i =0; i < len; i++)
	{
		arr[i] = s1[pos];
		pos++;
		j++;
	}
	arr[j] = '\0';
	
	return arr;

}
//char** StrTok(char* s1, const char s2)
///*A call to StrTok breaks string s1 into
//37 ``tokens’’ (logical pieces such as words
//38 in a line of text) separated by character
//39 contained in char s2*/
//{
//
//	int count = 0;
//	/*while (s1[count] != '\0')
//		count++;*/
//	int count1 = 0; 
//	char** arr = new char*[10];
//	for (int j = 0; j < 10; j++)
//		arr[j] = new char[10];
//
//	for (int i = 0; s1[i] != '\0';i++)
//	{
//		for (int j = 0; j < s1[i] != '\0'; j++)
//		{
//			if (s1[i] != s2)
//			{
//				arr[i][j] = s1[i];
//
//			}
//			else
//				cout << endl;
//		}
//		
//	}
//	return arr;
//}


//////////question 6
//int count_occurrences(char* arr, int n, char x)
//{
//	int result = 0;
//	for (int i = 0; i < n; i++)
//		if (x == arr[i])
//			result++;
//	return result;
//}
//void countLetters(char* str, int*& array, int& size)
//{
//
//	size = strlen(str);
//	char arr1[26];
//	char count = 'a';
//	for (int i = 0; i < 26; i++)
//	{
//		arr1[i] = count;
//		count++;
//	}
//
//
//
//	for (int i = 0; i < 26; i++)
//	{
//
//		for (int j = 0; j < size; j++)
//		{
//
//			if (arr1[i] == str[j])
//			{
//				char x = str[j];
//				int res = count_occurrences(arr1, size, x);
//				array[j] = res;
//			}
//
//		}
//
//		
//	}
//
//}

//
//void countLetters(const char* text, int* counts, int& size) {
//
//	/*array = new int[26];
//	int len = 0;
//	while (str[len] != '\0')
//	{
//		len++;
//	}
//	size = 26;
//	for (int i = 0; i < 26; i++) {
//		array[i] = 0;
//	}
//
//	for (int i = 0; i < len; i++) {
//////		char c = tolower(str[i]);
//////		cout << c << " ";
//////		if (isalpha(c)) {
//			array[c - 'a']++;
//		}
//	}*/
//}

