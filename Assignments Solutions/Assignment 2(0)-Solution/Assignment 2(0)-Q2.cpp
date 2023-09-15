/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 2
*/
#include"String.cpp"
#include<iostream>
using namespace std;
int main()
{
    String s1;
    String s2(10);
    const char charArray[] = "Awesome";
    String s3(charArray);
    String s4 = s3;
    cout << "Length of s4: " << s4.strLength() << endl;
    bool isEmpty = s4.empty();
    if (isEmpty)
        cout << "Yes! it is empty." << endl;
    else
        cout << "No, it is not empty." << endl;
    int index = s4.charAt('e');
    if (index != -1)
        cout << "Index of 'e' in s4: " << index << endl;
    else
        cout << "'e' not found in s4" << endl;
    const char anotherCharArray[] = "Awesome";
    bool isEqual = s4.equals(anotherCharArray);
    if (isEqual)
        cout << "s4 is equal to anotherCharArray" << endl;
    else
        cout << "s4 is not equal to anotherCharArray" << endl;
    const char caseInsensitiveArray[] = "awesOme";
    bool isCaseEqual = s4.equalsIgnoreCase(caseInsensitiveArray);
    if (isCaseEqual)
        cout << "s4 is equal to caseInsensitiveArray (ignoring case)" << endl;
    else
        cout << "s4 is not equal to caseInsensitiveArray (ignoring case)" << endl;
    const char* data = s4.get_data();
    cout << "Data of s4: " << data << endl;
    const char substringArray[] = "es";
    char* substring = s4.substring(substringArray, 1);
    if (substring != NULL)
        cout << "Substring of s4: " << substring << endl;
    else
        cout << "Substring not found in s4" << endl;
    const char substringRangeArray[] = "el";
    char* substringRange = s4.substring(substringRangeArray, 1, 2);
    if (substringRange != NULL)
        cout << "Substring range of s4: " << substringRange << endl;
    else
        cout << "Substring range not found in s4" << endl;

    return 0;
}






//for later use
//In one cpp file

/*#include<iostream>
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

int main()
{
    String s1;
    String s2(10);
    const char charArray[] = "Awesome";
    String s3(charArray);
    String s4 = s3;
    cout << "Length of s4: " << s4.strLength() << endl;
    bool isEmpty = s4.empty();
    if (isEmpty)
        cout << "Yes! it is empty." << endl;
    else
        cout << "No, it is not empty." << endl;
    int index = s4.charAt('e');
    if (index != -1)
        cout << "Index of 'e' in s4: " << index << endl;
    else
        cout << "'e' not found in s4" << endl;
    const char anotherCharArray[] = "Awesome";
    bool isEqual = s4.equals(anotherCharArray);
    if (isEqual)
        cout << "s4 is equal to anotherCharArray" << endl;
    else
        cout << "s4 is not equal to anotherCharArray" << endl;
    const char caseInsensitiveArray[] = "awesOme";
    bool isCaseEqual = s4.equalsIgnoreCase(caseInsensitiveArray);
    if (isCaseEqual)
        cout << "s4 is equal to caseInsensitiveArray (ignoring case)" << endl;
    else
        cout << "s4 is not equal to caseInsensitiveArray (ignoring case)" << endl;
    const char* data = s4.get_data();
    cout << "Data of s4: " << data << endl;
    const char substringArray[] = "es";
    char* substring = s4.substring(substringArray, 1);
    if (substring != NULL)
        cout << "Substring of s4: " << substring << endl;
    else
        cout << "Substring not found in s4" << endl;
    const char substringRangeArray[] = "el";
    char* substringRange = s4.substring(substringRangeArray, 1, 2);
    if (substringRange != NULL)
        cout << "Substring range of s4: " << substringRange << endl;
    else
        cout << "Substring range not found in s4" << endl;

    return 0;
}*/