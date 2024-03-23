/*
Tashfeen Abbasi
i22041
OOP-C
Assignment 2
*/
#include "Pulley.h"
#include<iostream>
using namespace std;
//````````````````````````````````````````````````PULLEY CLASS`````````````````````````````````````````````````````
Pulley::Pulley(double radius) 
{
    this->radius = radius;
}

double Pulley::getRadius() 
{
    return radius;
}

void Pulley::setRadius(double radius) 
{
    this->radius = radius;
}
//````````````````````````````````````````````````ROPE CLASS``````````````````````````````````````````````````````````
Rope::Rope(double length, double thickness) 
{
    this->length = length;
    this->thickness = thickness;
}

double Rope::getLength() 
{
    return length;
}

void Rope::setLength(double length) 
{
    this->length = length;
}

double Rope::getThickness() 
{
    return thickness;
}

void Rope::setThickness(double thickness) 
{
    this->thickness = thickness;
}
//`````````````````````````````````````````````````````````````````ROTATION CLASS```````````````````````````````````````````````````
Rotation::Rotation(const Pulley& obj1, const Rope& r_obj) 
{
    p = obj1;
    rope = r_obj;
}

int Rotation::total_rings()
{
    int numRings = 0;
    double circumference = 2 * p.getRadius() * 3.1416;

    while (rope.getLength() > 0)
    {
        double circumference = 2 * p.getRadius() * 3.1416;
        if (rope.getLength() > circumference) 
        {
            numRings++;
        }
        rope.setLength(rope.getLength() - circumference);
        p.setRadius(p.getRadius() + rope.getThickness());
    }

    return numRings;
}



