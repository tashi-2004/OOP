/*
Tashfeen Abbasi
i22-2041
OOP-C
Assignment 3
Question 5
/


#pragma once
#include<iostream>
#include<sstream>
using namespace std;


//````````````````````````````````````````````````````` FLOWER CLASS````````````````````````````````
class Flower
{
private:


	string Name;


	string Color;


	float Price;


	bool Perfumed;


	bool on_Sale;


public:


	Flower();


	Flower(string name, string color, float price);


	Flower(string n, string c, float p, bool perfumed);


	Flower(string n, string c, float p, bool per, bool on_Sale);


	string get_name();


	void set_name(string n);


	string get_color();


	void set_color(string c);


	float get_price();


	void set_price(float p);


	bool get_perfumed();


	void set_perfumed(bool a);


	void set_onSale(bool o);


	bool get_onSale();

	
	float prices();

	
	bool perfumed();
	
	operator string() const;


	bool operator==(Flower& f);


	friend ostream& operator<<(ostream& output, Flower& f1);
};

//``````` DEFAULT CONSTRUCTOR ````````

Flower::Flower()
{
	Name = "";
	Color = "";
	Price = 0.0;
	Perfumed = false;
	on_Sale = false;
}



















//``````` 3 PARAMETRIZED CONSTRUCTOR````````
Flower:: Flower(string name, string color, float price)
{
	this->Name = name;
	this->Color = color;
	this->Price = price;
	this->Perfumed = false;
	this->on_Sale = false;
}






















//``````` 4 PARAMETRIZED CONSTRUCTOR```````` 
Flower::Flower(string n, string c, float p, bool perfumed)
{
	this->Name = n;
	this->Color = c;
	this->Price = p;
	this->Perfumed = perfumed;
	this->on_Sale = false;
}



























//``````` 5 PARAMETRIZED CONSTRUCTOR```````
Flower::Flower(string n, string c, float p, bool per, bool on_Sale)
{
	this->Name = n;
	this->Color = c;
	this->Price = p;
	this->Perfumed = per;
	this->on_Sale = on_Sale;
}















//``````` SETTERS/GETTERS ```````
string Flower::get_name()
{
	return Name;
}
void Flower::set_name(string n)
{
	this->Name = n;
}
string Flower::get_color()
{
	return Color;
}
void Flower::set_color(string c)
{
	this->Color = c;
}
float Flower::get_price()
{
	return Price;
}
void Flower::set_price(float p)
{
	this->Price = p;
}
bool Flower::get_perfumed()
{
	return Perfumed;
}
void Flower::set_perfumed(bool a)
{
	this->Perfumed = a;
}
void Flower::set_onSale(bool o)
{
	this->on_Sale = o;
}
bool Flower::get_onSale()
{
	return on_Sale;
}














//``````` PRICE FUNCTION ``````
float Flower::prices()
{
	if (!on_Sale)
	{
		return Price;
	}
	else
	{
		return Price / 2;
	}
}

















//`````` PERFUMED FUNCTION ````````````
bool Flower::perfumed()
{
	if (Perfumed == true)
	{
		return true;
	}
	else
		return false;
}
















//```````` OPERATOR STRING  ``````
Flower::operator string() const
{
	stringstream ss;
	ss << Name << "/" << Color << "/" << Price << "/" << Perfumed << "/" << on_Sale << endl;
	return ss.str();
}

























//```````` OPERATOR ==  ````````````
bool Flower::operator==(Flower& f)
{
	if (this->Name == f.Name && this->Color == f.Color && this->Perfumed == f.Perfumed)
	{
		return true;
	}
	else
		return false;
}


















//```````` OSTREAM CLASS  ``````
ostream& operator<<(ostream& output, Flower& f1)
{
	output << "Name    : " << f1.Name << endl;
	output << "Color   : " << f1.Color << endl;
	output << "Price   : " << f1.Price << endl;
	output << "Perfumed: " << f1.Perfumed << endl;
	output << "on_Sale : " << f1.on_Sale << endl;
	return output;
}



















//``````````````````````````````````````````````````` BOUQUET CLASS ```````````````````````````````````
class Bouquet
{
private:
	Flower* flower_obj = new Flower[10];
	int tot = 0;
public:
	Bouquet();


	Bouquet(Flower& obj1, Flower& obj2, Flower& obj3);


	bool perfume() const;



	float price() const;



	operator string() const;




	Bouquet& operator+=(Flower& flow);



	Bouquet operator-(Flower& f);



	Bouquet operator+(Flower& f);



	Bouquet operator-=(Flower& a);


	friend ostream& operator<<(ostream& output, const Bouquet& b1);

};









Bouquet::Bouquet() {}








Bouquet::Bouquet(Flower& obj1, Flower& obj2, Flower& obj3)
{

	flower_obj[0] = Flower(obj1.get_name(), obj1.get_color(), obj1.get_price(), obj1.get_perfumed(), obj1.get_onSale());
	flower_obj[1] = Flower(obj2.get_name(), obj2.get_color(), obj2.get_price(), obj2.get_perfumed(), obj2.get_onSale());
	flower_obj[2] = Flower(obj3.get_name(), obj3.get_color(), obj3.get_price(), obj3.get_perfumed(), obj3.get_onSale());
	tot += 3;

}












//```````` PERFUME FUNCTION ``````
bool Bouquet::perfume() const
{
	for (int i = 0; i < 3; i++)
	{
		if (flower_obj[i].get_perfumed() == true)
		{
			return true;
		}
	}
	return false;
}



















//````````  PRICE FUNCTION ````````````
float Bouquet::price() const
{
	float sum = 0.0;
	for (int i = 0; i < tot; i++)
	{
		sum += flower_obj[i].prices();
	}
	if (perfume())
	{
		sum *= 2;
	}
	return sum;
}





















//```````` OPERATOR STRING  ``````
Bouquet::operator string() const
{
	stringstream ss;
	for (int i = 0; i < 3; i++)
	{
		if (flower_obj[i].get_name() == "NULL")
		{
			cout << "No flower in the bouquet" << endl;
		}
		else if (flower_obj[i].get_name() != "NULL")
		{
			cout << "String will be     :  ";
			ss << flower_obj[i].get_name() << "/"
				<< flower_obj[i].get_color() << "/"
				<< flower_obj[i].get_price() << "/"
				<< flower_obj[i].get_perfumed() << "/"
				<< flower_obj[i].get_onSale() << endl << endl;
		}

		ss << "Total price will be:  Rs " << price() << endl;
		return ss.str();
	}

	return "";
}














//``````` OPERATOR += ````````````
Bouquet& Bouquet::operator+=(Flower& flow)
{
	flower_obj[tot] = flow;
	tot++;
	return *this;
}

















Bouquet Bouquet::operator-(Flower& f)
{
	Bouquet b1;
	int index = 0;

	// Iterate through the array of flowers in the current Bouquet
	for (int i = 0; i < tot; i++)
	{
		// Check if the current flower matches the provided flower object
		if (!(flower_obj[i] == f))
		{
			// If the flower does not match, assign it to the next available index in the new Bouquet
			b1.flower_obj[index] = flower_obj[i];
			index++;
		}
	}
	b1.tot = index;

	return b1;
}

















Bouquet Bouquet::operator+(Flower& f)
{
	flower_obj[tot] = f;
	tot++;
	return *this;
}















Bouquet Bouquet::operator-=(Flower& a)
{
	int index = 0;

	// Iterate through the array of flowers in the current Bouquet
	for (int i = 0; i < tot; i++)
	{
		// Check if the current flower matches the provided flower object
		if (!(flower_obj[i] == a))
		{
			// If the flower does not match, assign it to the next available index in the new Bouquet
			this->flower_obj[index] = flower_obj[i];
			index++;
		}
	}
	this->tot = index;

	return *this;
}


















//```````` OSTREAM ``````
ostream& operator<<(ostream& output, const Bouquet& b1)
{
	for (int i = 0; i < b1.tot; i++)
	{
		if (b1.flower_obj[i].get_name() != "") {
			output << "Details about Bouquet are: " << endl << endl;
			output << b1.flower_obj[i] << endl;
		}
	}
	cout << endl;
	return output;
}


