#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle()
{
	r = 10;
}

Circle::Circle(double r)
{
	this->r = r;
}

double Circle::Find_S()
{
	double S;
	S = P * pow(r, 2);
	return S;
}
double Circle::Diameter()
{
	double D;
	D = 2 * r;
	return D;
}
