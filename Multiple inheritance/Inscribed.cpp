#include "Inscribed.h"
#include <iostream>
using namespace std;

Inscribed::Inscribed(double r,double a):Circle(r),Square(a)
{
	this->r = r;
	this->a = a;
}

void Inscribed::Inscr()
{
	if (Diameter() == a)
	{
		cout << "Circle is inscribed in a square" << endl;
	return;
	}
	cout << "A circle cannot be inscribed in a square" << endl;
}
