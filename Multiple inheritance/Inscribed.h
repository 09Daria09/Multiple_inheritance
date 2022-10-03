#pragma once
#include"Circle.h"
#include"Square.h"
class Inscribed :public Circle, public Square
{
public:
	Inscribed(double r,double a);
	void Inscr();
};

