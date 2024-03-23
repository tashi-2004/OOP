/*
Tashfeen Abbasi
i222041
OOP-C
Assignment 3
Question 1
/
#pragma once
#include<iostream>
using namespace std;




//````````````````````````````````````````DOLLAR CLASS``````````````````````````````````````````````````````````````
class Dollar
{


private:

    int dollar;


public:

    Dollar();


    Dollar(int d);


    int get_dollar();


    void set_dollar(int s);


};


Dollar::Dollar()
{
    dollar = 0;
}



Dollar::Dollar(int d)
{
    dollar = d;
}




int Dollar::get_dollar()
{
    return dollar;
}




void Dollar::set_dollar(int s)
{
    dollar = s;
}






//``````````````````````````````QUARTER CLASS``````````````````````````````````````````````````````````````
class Quarter
{





private:

    int quarter;


public:


    Quarter();


    Quarter(int q);


    int get_quarter();



    void set_quarter(int s);


};



Quarter::Quarter()
{
    quarter = 0;
}



Quarter::Quarter(int q)
{
    quarter = q;
}



int Quarter::get_quarter()
{
    return quarter;
}



void Quarter::set_quarter(int s)
{
    quarter = s;
}





//```````````````````````````````NICKEL CLASS`````````````````````````````````````````````````````````````
class Nickel
{
private:


    int nickel;


public:



    Nickel();



    Nickel(int n);


    int get_nickel();


    void set_nickel(int n);


};


Nickel::Nickel()
{
    nickel = 0;
}



Nickel::Nickel(int n)
{
    nickel = n;
}




int Nickel::get_nickel()
{
    return nickel;
}



void Nickel::set_nickel(int n)
{
    nickel = n;
}







//``````````````````````````````````````CENT CLASS``````````````````````````````````````````````````````
class Cent
{

private:


    int cent;


public:


    Cent();


    Cent(int c);


    int get_cent();



    void set_cent(int c);


};



Cent::Cent()
{
    cent = 0;
}





Cent::Cent(int c)
{
    cent = c;
}





int Cent::get_cent()
{
    return cent;
}






void Cent::set_cent(int c)
{
    cent = c;
}









//````````````````````````````````````MONEY CLASS````````````````````````````````````````````````````````
class Money
{




private:


    Dollar obj_dollar;


    Quarter obj_quarter;


    Nickel obj_nickel;


    Cent obj_cent;


public:
    Money();



    Money(double a);


    int get_dollar();


    void set_dollar(int s);


    int get_quarter();


    void set_quarter(int s);


    int get_nickel();


    void set_nickel(int n);


    int get_cent();


    void set_cent(int c);


    Money operator+(Money& m);


    Money operator-(Money m);


    Money operator+(Dollar d);


    Money operator-(Dollar d);


    Money operator+(Nickel d);


    Money operator-(Nickel d);


    Money operator+(Quarter d);


    Money operator-(Quarter d);


    Money operator+(Cent d);


    Money operator-(Cent d);


    Money operator++(int a);


    Money operator--(int);


    bool operator>=(Money m2);


    bool operator <= (Money m2);


    Quarter operator!();


    Nickel operator~();


    Money operator/(int n);


    Money operator*(int n);


    friend ostream& operator<<(ostream& output, Money& m1);


};







Money::Money() {}














Money::Money(double a)
{
    obj_dollar.set_dollar(static_cast<int>(a));
    double left = (a - obj_dollar.get_dollar()) * 100;

    obj_quarter.set_quarter(static_cast<int>(left / 25));
    left -= obj_quarter.get_quarter() * 25;

    obj_nickel.set_nickel(static_cast<int>(left / 5));
    left -= obj_nickel.get_nickel() * 5;

    obj_cent.set_cent(static_cast<int>(left));
}



















//Setters and Getters
int Money::get_dollar()
{
    return obj_dollar.get_dollar();
}

void Money::set_dollar(int s)
{
    obj_dollar.set_dollar(s);
}

int Money::get_quarter()
{
    return obj_quarter.get_quarter();
}

void Money::set_quarter(int s)
{
    obj_quarter.set_quarter(s);
}

int Money::get_nickel()
{
    return obj_nickel.get_nickel();
}

void Money::set_nickel(int n)
{
    obj_nickel.set_nickel(n);
}

int Money::get_cent()
{
    return obj_cent.get_cent();
}

void Money::set_cent(int c)
{
    obj_cent.set_cent(c);
}






















//``````````````````````````Money Addition``````````````````````````````````````````````````````````````````
Money Money::operator+(Money& m)
{
    Money plus;
    //We add all the money in the smallest form (cents)
    //We can add cents than this object cents
    //Convert all the money to cents 
    int overall_cents = this->obj_cent.get_cent() + m.obj_cent.get_cent()
        + this->obj_nickel.get_nickel() * 5 + m.obj_nickel.get_nickel() * 5
        + this->obj_quarter.get_quarter() * 25 + m.obj_quarter.get_quarter() * 25
        + this->obj_dollar.get_dollar() * 100 + m.obj_dollar.get_dollar() * 100;
    //Conditions
    plus.set_dollar(overall_cents / 100);
    overall_cents %= 100;

    plus.set_quarter(overall_cents / 25);
    overall_cents %= 25;

    plus.set_nickel(overall_cents / 5);
    overall_cents %= 5;

    plus.set_cent(overall_cents);

    return plus;

}



















//```````````````````````````````Money Subtraction`````````````````````````````````````````````````````````````
Money Money::operator-(Money m)
{
    Money minus;
    int overall_cents = this->obj_cent.get_cent() - m.obj_cent.get_cent()
        + (this->obj_nickel.get_nickel() - m.obj_nickel.get_nickel()) * 5
        + (this->obj_quarter.get_quarter() - m.obj_quarter.get_quarter()) * 25
        + (this->obj_dollar.get_dollar() - m.obj_dollar.get_dollar()) * 100;

    //Conditions
    minus.set_dollar(overall_cents / 100);
    overall_cents %= 100;

    minus.set_quarter(overall_cents / 25);
    overall_cents %= 25;

    minus.set_nickel(overall_cents / 5);
    overall_cents %= 5;

    minus.set_cent(overall_cents);
    return minus;
}






















//````````````````````````````````Dollar Addition``````````````````````````````````````````````````````````````
Money Money::operator+(Dollar d)
{
    Money plus_dollars;
    int overall_cents = this->obj_cent.get_cent()
        + this->obj_nickel.get_nickel() * 5
        + this->obj_quarter.get_quarter() * 25
        + this->obj_dollar.get_dollar() * 100
        //We have to add object d also and convert it into cents
        + d.get_dollar() * 100;
    //Just convert them into their logics
    plus_dollars.set_dollar(overall_cents / 100);
    overall_cents %= 100;

    plus_dollars.set_quarter(overall_cents / 25);
    overall_cents %= 25;

    plus_dollars.set_nickel(overall_cents / 5);
    overall_cents %= 5;

    plus_dollars.set_cent(overall_cents);

    return plus_dollars;
}




















//``````````````````````````````Dollar Subtraction````````````````````````````````````````````````````````
Money Money::operator-(Dollar d)
{
    Money minus_dollars;
    int overall_cents = this->obj_cent.get_cent()
        + this->obj_nickel.get_nickel() * 5
        + this->obj_quarter.get_quarter() * 25
        + this->obj_dollar.get_dollar() * 100
        //We have to add object d also and convert it into cents
        - d.get_dollar() * 100;
    minus_dollars.set_dollar(overall_cents / 100);
    overall_cents %= 100;

    minus_dollars.set_quarter(overall_cents / 25);
    overall_cents %= 25;

    minus_dollars.set_nickel(overall_cents / 5);
    overall_cents %= 5;

    minus_dollars.set_cent(overall_cents);

    return minus_dollars;
}























//```````````````````````````````NICKEL ADDITION``````````````````````````````````````````````````````````````````
Money Money::operator+(Nickel d)
{
    Money plus_nickel;
    int overall_cents = this->obj_cent.get_cent()
        + this->obj_nickel.get_nickel() * 5
        + this->obj_quarter.get_quarter() * 25
        + this->obj_dollar.get_dollar() * 100
        //We have to add object d also and convert it into cents
        + d.get_nickel() * 5;

    plus_nickel.set_dollar(overall_cents / 100);
    overall_cents %= 100;

    plus_nickel.set_quarter(overall_cents / 25);
    overall_cents %= 25;

    plus_nickel.set_nickel(overall_cents / 5);
    overall_cents %= 5;

    plus_nickel.set_cent(overall_cents);

    return plus_nickel;
}
























//````````````````````````````````NICKEL SUBTRACTION`````````````````````````````````````````````````````````````
Money Money::operator-(Nickel d)
{
    Money minus_nickel;
    int overall_cents = this->obj_cent.get_cent()
        + this->obj_nickel.get_nickel() * 5
        + this->obj_quarter.get_quarter() * 25
        + this->obj_dollar.get_dollar() * 100
        //We have to add object d also and convert it into cents
        - d.get_nickel() * 5;

    minus_nickel.set_dollar(overall_cents / 100);
    overall_cents %= 100;

    minus_nickel.set_quarter(overall_cents / 25);
    overall_cents %= 25;

    minus_nickel.set_nickel(overall_cents / 5);
    overall_cents %= 5;

    minus_nickel.set_cent(overall_cents);

    return minus_nickel;
}


























//```````````````````````````````QUARTER ADDITION```````````````````````````````````````````````````````
Money Money::operator+(Quarter d)
{
    Money plus_quarter;
    int overall_cents = this->obj_cent.get_cent()
        + this->obj_nickel.get_nickel() * 5
        + this->obj_quarter.get_quarter() * 25
        + this->obj_dollar.get_dollar() * 100
        + d.get_quarter() * 25;


    plus_quarter.set_dollar(overall_cents / 100);
    overall_cents %= 100;

    plus_quarter.set_quarter(overall_cents / 25);
    overall_cents %= 25;

    plus_quarter.set_nickel(overall_cents / 5);
    overall_cents %= 5;

    plus_quarter.set_cent(overall_cents);

    return plus_quarter;
}


















//``````````````````````````````QUARTER SUBTRACTION````````````````````````````````````````````````````````
Money Money::operator-(Quarter d)
{
    Money minus_quarter;
    int overall_cents = this->obj_cent.get_cent()
        + this->obj_nickel.get_nickel() * 5
        + this->obj_quarter.get_quarter() * 25
        + this->obj_dollar.get_dollar() * 100
        - d.get_quarter() * 25;


    minus_quarter.set_dollar(overall_cents / 100);
    overall_cents %= 100;

    minus_quarter.set_quarter(overall_cents / 25);
    overall_cents %= 25;

    minus_quarter.set_nickel(overall_cents / 5);
    overall_cents %= 5;

    minus_quarter.set_cent(overall_cents);

    return minus_quarter;
}



























//``````````````````````````````````````CENT ADDITION``````````````````````````````````````````````````````````````````
Money Money::operator+(Cent d)
{
    Money plus_cent;
    int overall_cents = this->obj_cent.get_cent()
        + this->obj_nickel.get_nickel() * 5
        + this->obj_quarter.get_quarter() * 25
        + this->obj_dollar.get_dollar() * 100
        + d.get_cent();


    plus_cent.set_dollar(overall_cents / 100);
    overall_cents %= 100;

    plus_cent.set_quarter(overall_cents / 25);
    overall_cents %= 25;

    plus_cent.set_nickel(overall_cents / 5);
    overall_cents %= 5;

    plus_cent.set_cent(overall_cents);

    return plus_cent;
}




















//``````````````````````````````````````CENT SUBTRACTION```````````````````````````````````````````````````````````````````
Money Money::operator-(Cent d)
{
    Money minus_cent;
    int overall_cents = this->obj_cent.get_cent()
        + this->obj_nickel.get_nickel() * 5
        + this->obj_quarter.get_quarter() * 25
        + this->obj_dollar.get_dollar() * 100
        - d.get_cent(); // Corrected this line

    minus_cent.set_dollar(overall_cents / 100);
    overall_cents %= 100;

    minus_cent.set_quarter(overall_cents / 25);
    overall_cents %= 25;

    minus_cent.set_nickel(overall_cents / 5);
    overall_cents %= 5;

    minus_cent.set_cent(overall_cents);

    return minus_cent;
}

















//````````````````````````````````````````````Operator ++```````````````````````````````````````````````````````````````````
Money Money::operator++(int a)
{
    if (this->obj_nickel.get_nickel() > 0 || this->obj_cent.get_cent() > 0)
    {
        this->obj_quarter = this->obj_quarter.get_quarter() + 1;
        this->obj_nickel = 0;
        this->obj_cent = 0;
    }
    return *this;
}


















//````````````````````````````````````````````Operator --```````````````````````````````````````````````````````````````````
Money Money::operator--(int)
{

    if (this->obj_nickel.get_nickel() > 0 || this->obj_cent.get_cent() > 0)
    {
        this->obj_quarter = this->obj_quarter.get_quarter() - 1;
        this->obj_nickel = 0;
        this->obj_cent = 0;
    }
    return *this;
}


















//````````````````````````````````````````````Operator >=```````````````````````````````````````````````````````````````````
bool Money::operator>=(Money m2)
{

    int m1_cents = this->get_cent() + this->get_nickel() * 5 + this->get_quarter() * 25 + this->get_dollar() * 100;//These are directly m1 cents
    int m2_cents = m2.get_cent() + m2.get_nickel() * 5 + m2.get_quarter() * 25 + m2.get_dollar() * 100;

    if (m1_cents >= m2_cents)
    {
        return true;
    }
    else
        return false;
}


















// ````````````````````````````````````````````Operator <=```````````````````````````````````````````````````````````````````
bool Money::operator<=(Money m2)
{
    int m1_cents = this->get_cent() + this->get_nickel() * 5 + this->get_quarter() * 25 + this->get_dollar() * 100;//These are directly m1 cents
    int m2_cents = m2.get_cent() + m2.get_nickel() * 5 + m2.get_quarter() * 25 + m2.get_dollar() * 100;

    if (m1_cents <= m2_cents)
    {
        return true;
    }
    else
        return false;
}


















// ````````````````````````````````````````````QUARTER ! ```````````````````````````````````````````````````````````````````
Quarter Money::operator!()
{
    Quarter q;
    int overall_cents = this->get_cent()
        + this->get_nickel() * 5
        + this->get_quarter() * 25
        + this->get_dollar() * 100;

    q = overall_cents / 25;

    return q;
}



















// ```````````````````````````````````````````NICKEL ~ ```````````````````````````````````````````````````````````````````
Nickel Money::operator~()
{
    Nickel n1;
    int overall_cents = this->get_cent()
        + this->get_nickel() * 5
        + this->get_quarter() * 25
        + this->get_dollar() * 100;

    n1 = overall_cents / 5;

    return n1;
}
















// ``````````````````````````````````````OPERATOR /````````````````````````````````````````````````````````````````````````
Money Money::operator/(int n)
{
    Money t;
    int overall_cents = this->get_cent()
        + this->get_nickel() * 5
        + this->get_quarter() * 25
        + this->get_dollar() * 100;

    overall_cents /= n;
    int quotient_cents = overall_cents / n;
    t.set_cent(quotient_cents % 100);
    quotient_cents /= 100;

    t.set_nickel(quotient_cents % 5);
    quotient_cents /= 5;

    t.set_quarter(quotient_cents % 25);
    quotient_cents /= 25;

    t.set_dollar(quotient_cents);

    return t;

}
















// ``````````````````````````````````````OPERATOR *````````````````````````````````````````````````````````````````````````
Money Money::operator* (int n)
{
    Money c;
    int overall_cents = this->get_cent()
        + this->get_nickel() * 5
        + this->get_quarter() * 25
        + this->get_dollar() * 100;

    overall_cents *= n;
    int quotient_cents = overall_cents / n;
    c.set_cent(quotient_cents % 100);
    quotient_cents /= 100;

    c.set_nickel(quotient_cents % 5);
    quotient_cents /= 5;

    c.set_quarter(quotient_cents % 25);
    quotient_cents /= 25;

    c.set_dollar(quotient_cents);

    return c;
}















//````````````````````````````````````````````OSTREAM````````````````````````````````````````````````````````````````````
ostream& operator<<(ostream& output, Money& m1) {
    output << "Dollars : $" << m1.get_dollar() << endl;
    output << "Quarters:  " << m1.get_quarter() << endl;
    output << "Nickels :  " << m1.get_nickel() << endl;
    output << "Cents   :  " << m1.get_cent() << endl;
    return output;
}