#include "Rectangle.h"
#include <iostream>
#include <math.h>

using namespace std;

void Rectangle::SetA(double value)
{
	if (value > 0)
		pair.SetA(value);
	else
		pair.SetA(0);
}

void Rectangle::SetB(double value)
{
	if (value > 0)
		pair.SetB(value);
	else
		pair.SetB(0);
}

Rectangle::Rectangle(const double A, const double B)
{
	if (A  > 0 && B >0)
	{
		SetA(A);
		SetB(B);
		
	}
	else
	{
		SetA(0);
		SetB(0);
		
	}
}

Rectangle::Rectangle(const Rectangle& v)
{
	pair = v.pair;
}

Rectangle::~Rectangle(void)
{}

Rectangle& Rectangle::operator = (const Rectangle& n)
{
	pair = n.pair;
	return *this;
}

Rectangle::operator string () const
{
	return string(pair);
}

ostream& operator <<(ostream& out, const Rectangle& s)
{
	out << string(s);
	return out;
}

istream& operator >>(istream& in, Rectangle& s)
{
	cout << endl;
	cout << "pair: " << endl;
	in >> s.pair;
	return in;
}

Rectangle& Rectangle::operator ++()
{
	++pair;
	return *this;
}

Rectangle& Rectangle::operator --()
{
	--pair;
	return *this;
}

Rectangle Rectangle::operator ++(int)
{
	Rectangle s(*this);
	pair++;
	return s;
}

Rectangle Rectangle::operator --(int)
{
	Rectangle s(*this);
	pair--;
	return s;
}

double Rectangle::Square() const
{
	double a = pair.GetA();
	double b = pair.GetB();
	double S = a * b;
	return S;
}
double Rectangle::Perimeter() const
{
	double a = pair.GetA();
	double b = pair.GetB();
	double P = a * 2 + b * 2;
	return P;
}
