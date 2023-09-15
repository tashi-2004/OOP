/*
Tashfeen Abbasi
22i-2041
Assignment 1
OOP_C
*/
#include<iostream>
#include<bitset>
#include <sstream>
using namespace std;
string decimalToBinary(int n)
{
	string binary = bitset<16>(n).to_string();
	return binary;
}
string reverse(string binary)
{
	for (int i = 0; i < binary.length(); i++)
	{
		if (binary[i] == '0')
			binary[i] = '1';
		else
		{
			binary[i] = '0';
		}
	}
	return binary;
}
void printBinary(string& binaryString, int index) {
	if (index < binaryString.length()) {
		cout << binaryString.substr(index) << endl;
		binaryString = reverse(binaryString);
		printBinary(binaryString, index + 1);
	}
}
int main()
{
	cout << "\033[1;33m" << endl;
	int num = 0;
	cout << "Enter teh number from 1 to 500:  ";
	cin >> num;
	cout << endl;
	//comvert into number
	string binary = decimalToBinary(num);
	cout << "Binary Representation: " << binary << endl << endl;
	printBinary(binary, 0);
}