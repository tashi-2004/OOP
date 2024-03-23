#include<iostream>
#include"Flower.h"
#include<sstream>
using namespace std;
//```````` MAIN ``````
int main()
{
	//```````` DISPLAY OF FLLOWERS  ``````
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	Flower r1("Rose", "Yellow", 1.5);
	cout << "\t\t\t\t\t____________" << endl;
	cout << "\t\t\t\t\t| Flower 1 |" << endl;
	cout << "\t\t\t\t\t|__________|" << endl;
	cout << r1 << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	Flower r2("Rose", "Yellow", 3.0, true);
	cout << "\t\t\t\t\t____________" << endl;
	cout << "\t\t\t\t\t| Flower 2 |" << endl;
	cout << "\t\t\t\t\t|__________|" << endl;
	cout << r2 << endl;
	cout << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	Flower r3("Rose", "Red", 2.0, true, true);
	cout << "\t\t\t\t\t____________" << endl;
	cout << "\t\t\t\t\t| Flower 3 |" << endl;
	cout << "\t\t\t\t\t|__________|" << endl;
	cout << r3 << endl;
	cout << endl;




	// ```````````````````````````````````````````````````For taking input from the user`````````````````````````````````````````````````
	/*string name;
	string color;
	double price;
	bool onSale;
	bool isPerfumed;
	Flower r1(name, color, price);
	cout << "\t\t\t\t\t____________" << endl;
	cout << "\t\t\t\t\t| Flower 1 |" << endl;
	cout << "\t\t\t\t\t|__________|" << endl;
	cout << r1 << endl;
	cout << endl;

	Flower r2(name, color, price, isPerfumed);
	cout << "\t\t\t\t\t| Flower 2 |" << endl;
	cout << "\t\t\t\t\t|__________|" << endl;
	cout << r2 << endl;
	cout << endl;


	Flower r3(name, color, price, isPerfumed,onSale);
	cout << "\t\t\t\t\t| Flower 2 |" << endl;
	cout << "\t\t\t\t\t|__________|" << endl;
	cout << r3 << endl;
	cout << endl;*/




	//```````` PRICES FOR FLOWER CLASS ``````
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t________________________________________________" << endl;
	cout << "\t\t\t| Prices if they are on sale and if not on sale|" << endl;
	cout << "\t\t\t|______________________________________________|" << endl;
	cout << r1.prices() << endl << endl;
	cout << r2.prices() << endl << endl;
	cout << r3.prices() << endl << endl;
	cout << endl;


	//```````` PERFUMED FOR FLOWER CLASS ``````
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t______________________________________" << endl;
	cout << "\t\t\t\t| Flower is perfumed or not perfumed |" << endl;
	cout << "\t\t\t\t|____________________________________|" << endl;
	if (r1.perfumed() == 1)
	{
		cout << "Omg! r1 is perfumed " << endl << endl;
	}
	else
	{
		cout << ":(  r1 is not perfumed" << endl << endl;
	}
	if (r2.perfumed() == 1)
	{
		cout << "Omg! r2 is perfumed " << endl << endl;
	}
	else
	{
		cout << ":(  r2 is not perfumed" << endl << endl;
	}
	if (r3.perfumed() == 1)
	{
		cout << "Omg! r3 is perfumed " << endl << endl;
	}
	else
	{
		cout << ":(  r3 is not perfumed" << endl << endl;
	}
	cout << endl;


	//```````` STRING REPRESENTATION FOR FLOWER CLASS ``````
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t______________________________________" << endl;
	cout << "\t\t\t| String Representation for r1,r2,r3 |" << endl;
	cout << "\t\t\t|____________________________________|" << endl;
	cout << endl;
	cout << r1.operator string() << endl << endl;
	cout << r2.operator string() << endl << endl;
	cout << r3.operator string() << endl << endl;
	cout << endl;


	//```````````` EQUALITY ``````
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t__________________________________" << endl;
	cout << "\t\t\t\t| Are r1,r2,r3 are equal or not? |" << endl;
	cout << "\t\t\t\t|________________________________|" << endl;
	if (r1 == r2)
	{
		cout << "r1 and r2 are equal" << endl << endl;
	}
	else
	{
		cout << "r1 and r2 are not equal" << endl << endl;
	}

	if (r1 == r3)
	{
		cout << "r1 and r3 are equal" << endl << endl;
	}
	else
	{
		cout << "r1 and r3 are not equal" << endl << endl;
	}
	if (r2 == r3)
	{
		cout << "r2 and r3 are equal" << endl << endl;
	}
	else
	{
		cout << "r2 and r3 are not equal" << endl << endl;
	}
	cout << endl;


	//```````` PERFUMED FOR BOUQUET CLASS ````````
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	// Bouquet b1(r1,r2,r3);
	Bouquet b1;
	b1 += r1;
	b1 += r1;
	b1 += r2;
	b1 += r3;
	cout << "\t\t\t\t\t_________________________" << endl;
	cout << "\t\t\t\t\t| b1 is Perfumed or Not |" << endl;
	cout << "\t\t\t\t\t|_______________________|" << endl;
	if (b1.perfume() == 1)
	{
		cout << "Omg! b1 is perfumed " << endl;
	}
	else
	{
		cout << ":(  b1 is not perfumed" << endl;
	}
	cout << endl;


	//```````` PRICE FOR BOUQUET CLASS ``````
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t______________" << endl;
	cout << "\t\t\t\t\t\t| Price of b1|" << endl;
	cout << "\t\t\t\t\t\t|____________|" << endl;
	cout << "Price will be: " << b1.price() << endl;


	//```````` STRING REPRESENTATION FOR BOUQUET CLASS ``
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t_________________________________________" << endl;
	cout << "\t\t\t| String Representation and Total price |" << endl;
	cout << "\t\t\t|_______________________________________|" << endl;
	cout << endl;
	cout << b1.operator string() << endl;


	//```````` BOUQUET CLASS ``````
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	// b1 += r1;
	// b1 += r1;
	// b1 += r2;
	// b1 += r3;
	cout << b1 << endl;
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t_________________________" << endl;
	cout << "\t\t\t\t\t\t|Removed r1 from Bouquet|" << endl;
	cout << "\t\t\t\t\t\t|_______________________|" << endl;
	b1 = b1 - r1;
	cout << b1 << endl;



	Bouquet b2;
	b2 = b1 + r1; // Add one Flower of type r1
	
	cout << "\t\t\t\t\t\t_______________" << endl;
	cout << "\t\t\t\t\t\t|Bouquet 2    |" << endl;
	cout << "\t\t\t\t\t\t|_____________|" << endl;
	cout << b2 << endl;
	// Delete all the perfumed flowers from the bouquet.
	b2 -= r2;
	b2 -= r3;
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t________________________________" << endl;
	cout << "\t\t\t\t\t\t|Removed r2 and r3 from Bouquet|" << endl;
	cout << "\t\t\t\t\t\t|______________________________|" << endl;
	cout << b2;
	return 0;


}