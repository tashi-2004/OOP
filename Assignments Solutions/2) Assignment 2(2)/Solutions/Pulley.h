/*
Tashfeen Abbasi
i22041
OOP-C
Assignment 2
*/
#include<iostream>
using namespace std;
//```````````````````````````````````````````PULLEY CLASS``````````````````````````````````````
class Pulley
{
private:
    double radius;

public:
    Pulley(double radius = 0.0);
    double getRadius();
    void setRadius(double radius);
};
//``````````````````````````````````````ROPE CLASS````````````````````````````````````````````
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
//````````````````````````````````````ROTATION CLASS``````````````````````````````````````````````
class Rotation
{
private:
    Pulley p;
    Rope rope;
public:
    Rotation(const Pulley& pulleyObj, const Rope& ropeObj);
    int total_rings();
};
