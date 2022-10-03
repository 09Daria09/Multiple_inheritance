#include "Square.h"
#include <iostream>
using namespace std;

Square::Square()
{
	a = 10;
}

Square::Square(double a)
{
	this->a = a;
}

double Square::Find_S()
{
	double S;
	S = pow(a, 2);
	return S;
}
