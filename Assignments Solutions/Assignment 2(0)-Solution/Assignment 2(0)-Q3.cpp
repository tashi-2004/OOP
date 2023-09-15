/*
Tashfeen Abbasi
i22041
OOP-C
Assignment 2
*/
#include<iostream>
#include"Pulley.cpp"
using namespace std;
int main()
{
    double r, L, T;
    cout << "Enter the initial radius of the pulley: ";
    cin >> r;
    cout << "Enter the length of the rope: ";
    cin >> L;
    cout << "Enter the thickness of the rope: ";
    cin >> T;
    Pulley p1(r);
    Rope r1(L, T);
    Rotation R(p1, r1);
    int ring = R.total_rings();
    cout << "The number of rings that are formed : " << ring << endl;
    return 0;
}




//for later use
//q3 in one cpp file
/*#include <iostream>
using namespace std;

class Pulley
{
private:
    double radius;

public:
    Pulley(double radius = 0.0);
    double getRadius();
    void setRadius(double radius);
};




class Rope
{
private:
    double length;
    double thickness;

public:
    Rope(double length = 0.0, double thickness = 0.0);
    double getLength();
    void setLength(double length);
    double getThickness();
    void setThickness(double thickness);
};

class Rotation
{
private:
    Pulley p;
    Rope rope;

public:
    Rotation(const Pulley& pulleyObj, const Rope& ropeObj);
    int getNumberOfRings();
};



Pulley::Pulley(double radius) {
    this->radius = radius;
}

double Pulley::getRadius() {
    return radius;
}

void Pulley::setRadius(double radius) {
    this->radius = radius;
}

Rope::Rope(double length, double thickness) {
    this->length = length;
    this->thickness = thickness;
}

double Rope::getLength() {
    return length;
}

void Rope::setLength(double length) {
    this->length = length;
}

double Rope::getThickness() {
    return thickness;
}

void Rope::setThickness(double thickness) {
    this->thickness = thickness;
}

Rotation::Rotation(const Pulley& pulleyObj, const Rope& ropeObj) {
    p = pulleyObj;
    rope = ropeObj;
}

int Rotation::getNumberOfRings()
{
    int numRings = 0;
    double circumference = 2 * p.getRadius() * 3.1416;

    while (rope.getLength() > 0)
    {
        double circumference = 2 * p.getRadius() * 3.1416;
        if (rope.getLength() > circumference) {
            numRings++;
        }
        rope.setLength(rope.getLength() - circumference);
        p.setRadius(p.getRadius() + rope.getThickness());
    }

    return numRings;
}




int main()
{
    double initialRadius, ropeLength, ropeThickness;
    cout << "Enter the initial radius of the pulley: ";
    cin >> initialRadius;

    cout << "Enter the length of the rope: ";
    cin >> ropeLength;

    cout << "Enter the thickness of the rope: ";
    cin >> ropeThickness;

    Pulley p1(initialRadius);
    Rope rope(ropeLength, ropeThickness);
    Rotation rotation(p1, rope);

    int numRings = rotation.getNumberOfRings();
    cout << "The number of rings that can be formed: " << numRings << endl;

    return 0;
}

*/

