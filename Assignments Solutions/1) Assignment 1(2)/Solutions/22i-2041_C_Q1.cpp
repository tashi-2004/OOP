/*
Tashfeen Abbasi
22i-2041
Assignment 1
OOP_C
*/
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int Total_sum = 0;
//Display ka Function
void display(int** array, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (array[i][j] < 10)
				cout << "0";
			cout << array[i][j] << "  ";
		}
		cout << endl;
	}
	cout << "-------------------------------------------------------------------------------------------------" << endl << endl;
}
//Prime Number 
bool is_prime(int number)
{
	bool prime = true;
	if (number == 0 || number == 1)
		prime = false;

	for (int i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}
//Vertical
void vertically(int** array, int size)
{
	int number = 0;
	for (int i = 0; i < size - 2; i++)
	{
		for (int j = 0; j < size; j++)
		{
			number = array[i][j];
			if (is_prime(number))
			{
				number = array[i + 1][j];
				if (is_prime(number))
				{
					number = array[i + 2][j];
					if (is_prime(number))
					{
						cout << "Vertical prime combination is                : ";
						cout << array[i][j] << "\t" << array[i + 1][j] << "\t" << array[i + 2][j] << "\t" << endl;
					}
				}
			}
		}
	}
}
//Horizontal

void horizontally(int** array, int size)
{
	int number = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 2; j++)
		{
			number = array[i][j];
			if (is_prime(number))
			{
				number = array[i][j + 1];
				if (is_prime(number))
				{
					number = array[i][j + 2];
					if (is_prime(number))
					{
						cout << "Horizontal prime combination is              : ";
						cout << array[i][j] << "\t" << array[i][j + 1] << "\t" << array[i][j + 2] << "\t" << endl;
					}
				}
			}
		}
	}
}
//Right Diagonal
void rightdiagonal(int** array, int size)
{
	int number = 0;
	for (int i = 0; i < size - 2; i++)
	{
		for (int j = 0; j < size - 2; j++)
		{
			if (i == j)
			{
				number = array[i][j];
				if (is_prime(number))
				{
					number = array[i + 1][j + 1];
					if (is_prime(number))
					{
						number = array[i + 2][j + 2];
						if (is_prime(number))
						{
							cout << "Right Diagonal prime combination is          : ";
							cout << array[i][j] << "\t" << array[i + 1][j + 1] << "\t" << array[i + 2][j + 2] << "\t" << endl;
						}
					}
				}
			}
		}
	}
}
//left diagonal
void leftdiagonal(int** array, int size)
{
	int number = 0;
	for (int i = 0; i < size - 2; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i + j == size - 1)
			{
				number = array[i][j];
				if (is_prime(number))
				{
					number = array[i + 1][j - 1];
					if (is_prime(number))
					{
						number = array[i + 2][j - 2];
						if (is_prime(number))
						{
							cout << "Left Diagonal prime combination is           : ";
							cout << array[i][j] << "\t" << array[i + 1][j - 1] << "\t" << array[i + 2][j - 2] << "\t" << endl;
						}
					}
				}
			}
		}
	}
}
//largest combination horizantal vise
int largestcombination_hor(int** array, int size)
{
	int largestCombSize = 0;
	int largestCombSum = 0;
	int currCombSize = 0;
	int currCombSum = 0;

	for (int i = 0; i < size; i++)
	{
		currCombSize = 0;
		currCombSum = 0;
		for (int j = 0; j < size; j++)
		{
			if (is_prime(array[i][j]))
			{
				currCombSize++;
				currCombSum += array[i][j];
				Total_sum += array[i][j];
			}
			else
			{
				if (currCombSize >= 3 && currCombSize > largestCombSize)
				{
					largestCombSize = currCombSize;
					largestCombSum = currCombSum;
				}
				currCombSize = 0;
				currCombSum = 0;
			}
		}

		if (currCombSize >= 3 && currCombSize > largestCombSize)
		{
			largestCombSize = currCombSize;
			largestCombSum = currCombSum;
		}
	}

	cout << "Largest Combination Size Horizontally        : " << largestCombSize << endl;
	cout << "Largest Combination Sum  Horizontally        : " << largestCombSum << endl;
	return largestCombSize;
}
//col ka ab
int largestcombination_ver(int** array, int size)
{
	int largestCombSize = 0;
	int largestCombSum = 0;
	int currCombSize = 0;
	int currCombSum = 0;

	for (int j = 0; j < size; j++) {
		currCombSize = 0;
		currCombSum = 0;

		for (int i = 0; i < size; i++) {
			if (is_prime(array[i][j])) {
				currCombSize++;
				currCombSum += array[i][j];
				Total_sum += array[i][j];
			}
			else {
				if (currCombSize >= 3 && currCombSize > largestCombSize) {
					largestCombSize = currCombSize;
					largestCombSum = currCombSum;
				}
				currCombSize = 0;
				currCombSum = 0;
			}
		}

		if (currCombSize >= 3 && currCombSize > largestCombSize) {
			largestCombSize = currCombSize;
			largestCombSum = currCombSum;
		}
	}

	cout << "Largest Combination Size of column           : " << largestCombSize << endl;
	cout << "Largest Combination Sum  of column           : " << largestCombSum << endl;
	return largestCombSize;
}// ab  right diagonal
int largestcombination_rightdiagnol(int** array, int size)
{
	int largestCombSize = 0;
	int largestCombSum = 0;
	int currCombSize = 0;
	int currCombSum = 0;

	for (int k = 0; k < size; k++) {
		currCombSize = 0;
		currCombSum = 0;

		for (int i = k, j = 0; i < size && j < size; i++, j++) {
			if (is_prime(array[i][j])) {
				currCombSize++;
				currCombSum += array[i][j];
			}
			else {
				if (currCombSize >= 3 && currCombSize > largestCombSize) {
					largestCombSize = currCombSize;
					largestCombSum = currCombSum;
				}
				currCombSize = 0;
				currCombSum = 0;
			}
		}

		if (currCombSize >= 3 && currCombSize > largestCombSize) {
			largestCombSize = currCombSize;
			largestCombSum = currCombSum;
		}
	}

	cout << "Largest Combination Size for right diagonal  : " << largestCombSize << endl;
	cout << "Largest Combination Sum for right diagonal   : " << largestCombSum << endl;
	return largestCombSize;

}

//largest left wala
int largestcombination_leftdiagnol(int** array, int size)
{
	int largestCombSize = 0;
	int largestCombSum = 0;
	int currCombSize = 0;
	int currCombSum = 0;

	for (int k = 0; k < size; k++) {
		currCombSize = 0;
		currCombSum = 0;

		for (int i = k, j = size - 1; i < size && j >= 0; i++, j--) {
			if (is_prime(array[i][j])) {
				currCombSize++;
				currCombSum += array[i][j];
			}
			else {
				if (currCombSize >= 3 && currCombSize > largestCombSize) {
					largestCombSize = currCombSize;
					largestCombSum = currCombSum;
				}
				currCombSize = 0;
				currCombSum = 0;
			}
		}

		if (currCombSize >= 3 && currCombSize > largestCombSize) {
			largestCombSize = currCombSize;
			largestCombSum = currCombSum;
		}
	}

	cout << "Largest Combination Size for left diagonal   : " << largestCombSize << endl;
	cout << "Largest Combination Sum for left diagonal    : " << largestCombSum << endl;
	return largestCombSize;

}

int main()
{
	cout << "\033[1;33m";
	int size = 0;
	char choice = ' ';

	cout << "\t\t\t\t\t______________________________" << endl;
	cout << "\t\t\t\t\t|Programming Problem Solving |" << endl;
	cout << "\t\t\t\t\t|____________________________|" << endl << endl << endl;
	cout << "Enter the size between 5-9   :  ";
	cin >> size;
l1:
	if (size < 5 || size > 9)
	{
		cout << "Incorrect Choice, Enter Again: ";
		cin >> size;
		if (size < 5 || size > 9)
			goto l1;
	}
	//2D Array Dynamically
	int** grid = new int* [size];
	for (int i = 0; i < size; i++)
	{
		grid[i] = new int[size];
	}
	//visual py chal raha but on dev and online compiler srand(time(0)) not working
	//srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			grid[i][j] = rand() % 99 + 1;
		}
	}

	cout << "Do you want to display(Y/N)" << endl;
	cin >> choice;
	cout << "-------------------------------------------------------------------------------------------------" << endl << endl;
	cout << "GRID: " << endl << endl;
	if (choice == 'Y' || choice == 'y')
		display(grid, size);
	horizontally(grid, size);
	vertically(grid, size);
	rightdiagonal(grid, size);
	leftdiagonal(grid, size);
	int x1 = largestcombination_hor(grid, size);
	int x2 = largestcombination_ver(grid, size);
	int x3 = largestcombination_rightdiagnol(grid, size);
	int x4 = largestcombination_leftdiagnol(grid, size);
	int option;
	cout << "-------------------------------------------------------------------------------------------------" << endl << endl;
	cout << "Select from the list: " << endl << endl;
	cout << "\t\t\t" << " ___________________________________________" << endl;
	cout << "\t\t\t" << "|    SELECT AN OPTION FROM BELOW            |" << endl;
	cout << "\t\t\t" << "|       1:LARGEST COMBINATION               |" << endl;
	cout << "\t\t\t" << "|       2:MOST COMBINATION                  |" << endl;
	cout << "\t\t\t" << "|       3:SUM OF  COMBINATION               |" << endl;
	cout << "\t\t\t" << "|___________________________________________|" << endl;
	cin >> option;
	if (option == 1)
	{
		//next will give error on dev and online compiler. but runs smoothly on visual studio 
		int largest = max({ x1, x2, x3, x4 });
		if (largest == x1)
			largestcombination_hor(grid, size);
		else if (largest == x2)
			largestcombination_ver(grid, size);
		else if (largest == x3)
			largestcombination_rightdiagnol(grid, size);
		else if (largest == x4)
			largestcombination_leftdiagnol(grid, size);

	}
	if (option == 2)
	{
		int mostCombinations = max({ x1, x2, x3, x4 });

		if (mostCombinations == x1)
			cout << "Row with the most combinations: Horizontal" << endl;
		else if (mostCombinations == x2)
			cout << "Row with the most combinations: Vertical" << endl;
		else if (mostCombinations == x3)
			cout << "Row with the most combinations: Right Diagonal" << endl;
		else if (mostCombinations == x4)
			cout << "Row with the most combinations: Left Diagonal" << endl;
	}
	if (option == 3)
	{
		int combinationsum = 0;
		int leftsum = 0;

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (is_prime(grid[i][j])) {
					if (j + 2 < size && is_prime(grid[i][j + 1]) && is_prime(grid[i][j + 2])) {
						combinationsum += grid[i][j];
						if (grid[i][j] != grid[i][j + 1]) {
							combinationsum += grid[i][j + 1];
						}
						if (grid[i][j] != grid[i][j + 2] && grid[i][j + 1] != grid[i][j + 2]) {
							combinationsum += grid[i][j + 2];
						}
						//same number wapis repeat na ho ga
						j += 2;
					}
					else
					{
						leftsum += grid[i][j];
					}
				}
			}
		}

		cout << "Sum of combinations     : " << combinationsum << endl;
		cout << "Sum of non-combinations : " << leftsum << endl;
	}


}