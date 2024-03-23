#include<iostream>
#include"Sandwiches.cpp"
using namespace std;

int main()
{
    Sandwiches s1("Balochi", 250, "Beef Cheese Sandwich", "Medium", true);
    Sandwiches s2("Beef BBQ", 450, "Special Beef Sandwich", "Medium", false);
    Sandwiches s3(s1);
    Sandwiches s4("Mutton BBQ", 1200, "Cheese Mutton Sandwich", "Large", false);
    Sandwiches s5(s4);
    s1.makeSandwich();
    s2.makeSandwich();
    s3.makeSandwich();
    s4.makeSandwich();
    s5.makeSandwich();
    cout << "_____________________________________________________________________________________" << endl << endl;
    cout << "Sandwich 1 Details: " << endl;
    s1.display();
    cout << "Sandwich 2 Details: " << endl;
    s2.display();
    cout << "Sandwich 3 Details: " << endl;
    s3.display();
    cout << "Sandwich 4 Details: " << endl;
    s4.display();
    cout << "Sandwich 5 Details: " << endl;
    s5.display();
    return 0;
}







//for later use
//Full code in one cpp


/*#include <iostream>
using namespace std;
class Sandwiches
{
    char* name;
    char* filling;
    char* size;
    bool is_Ready;
    double price;

public:
    Sandwiches();
    Sandwiches(const char* fillingVal, double priceVal);
    Sandwiches(const char* fillingVal, double priceVal, const char* nameVal, const char* sizeVal, bool ready_status);

    Sandwiches(const Sandwiches& sandwich);

    void setFilling(const char* fillingVal);

    void setPrice(double priceVal);
    void setName(const char* nameVal);

    void setSize(const char* sizeVal);
    const char* getFilling();
    double getPrice();

    const char* getName();

    const char* getSize();
    int makeSandwich();

    bool check_status();
    void display();
};






Sandwiches::Sandwiches()
{
    name = nullptr;
    filling = nullptr;
    size = nullptr;
    is_Ready = false;
    price = 0.0;
}

Sandwiches::Sandwiches(const char* fillingVal, double priceVal)
{
    name = nullptr;
    filling = const_cast<char*>(fillingVal);
    size = nullptr;
    is_Ready = false;
    price = priceVal;
}

Sandwiches::Sandwiches(const char* fillingVal, double priceVal, const char* nameVal, const char* sizeVal, bool ready_status)
{
    name = const_cast<char*>(nameVal);
    filling = const_cast<char*>(fillingVal);
    size = const_cast<char*>(sizeVal);
    is_Ready = ready_status;
    price = priceVal;
}

Sandwiches::Sandwiches(const Sandwiches& sandwich)
{
    name = static_cast<char*>(sandwich.name);
    filling = static_cast<char*>(sandwich.filling);
    size = static_cast<char*>(sandwich.size);
    is_Ready = sandwich.is_Ready;
    price = sandwich.price;
}

void Sandwiches::setFilling(const char* fillingVal)
{
    filling = const_cast<char*>(fillingVal);
}

void Sandwiches::setPrice(double priceVal)
{
    price = priceVal;
}

void Sandwiches::setName(const char* nameVal)
{
    name = const_cast<char*>(nameVal);
}

void Sandwiches::setSize(const char* sizeVal)
{
    size = const_cast<char*>(sizeVal);
}

const char* Sandwiches::getFilling()
{
    return filling;
}

double Sandwiches::getPrice()
{
    return price;
}

const char* Sandwiches::getName()
{
    return name;
}

const char* Sandwiches::getSize()
{
    return size;
}
int Sandwiches::makeSandwich()
{
    if (filling != nullptr && is_Ready) // Check if filling is not nullptr and is_Ready is true
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Sandwiches::check_status()
{
    return is_Ready;
}
void Sandwiches::display()
{
    cout << "Name   : " << name << endl;
    cout << "Filling: " << filling << endl;
    cout << "Size   : " << size << endl;
    cout << "Price  : PKR " << price << endl;
    cout << "Status : " << is_Ready << endl;
    cout << endl << endl;
    cout << "_____________________________________________________________________________________" << endl << endl;
}
//MAIN
int main()
{
    Sandwiches s1("Balochi", 250, "Beef Cheese Sandwich", "Medium", true);
    Sandwiches s2("Beef BBQ", 450, "Special Beef Sandwich", "Medium", false);
    Sandwiches s3(s1);
    Sandwiches s4("Mutton BBQ", 1200, "Cheese Mutton Sandwich", "Large", false);
    Sandwiches s5(s4);
    s1.makeSandwich();
    s2.makeSandwich();
    s3.makeSandwich();
    s4.makeSandwich();
    s5.makeSandwich();
    cout << "_____________________________________________________________________________________" << endl << endl;
    cout << "Sandwich 1 Details: " << endl;
    s1.display();
    cout << "Sandwich 2 Details: " << endl;
    s2.display();
    cout << "Sandwich 3 Details: " << endl;
    s3.display();
    cout << "Sandwich 4 Details: " << endl;
    s4.display();
    cout << "Sandwich 5 Details: " << endl;
    s5.display();
    return 0;
}

*/