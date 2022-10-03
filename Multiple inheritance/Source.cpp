#include<iostream>
#include"Circle.h"
#include"Square.h"
#include"Inscribed.h"
using namespace std;

int main()
{
	cout << "Enter the radius of the circle and the side of the square" << endl << endl;
	Inscribed obj(5, 10);
	obj.Inscr();
}