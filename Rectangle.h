#pragma once
#include "Pair.h"

class Rectangle
{
private:
	Pair pair;

public:
	double GetA() const { return pair.GetA(); }
	double GetB() const { return pair.GetB(); }


	void SetA(double value);
	void SetB(double value);

	Rectangle(const double a = 0, const double b = 0);
	Rectangle(const Rectangle& s);
	~Rectangle(void);

	Rectangle& operator = (const Rectangle& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Rectangle& s);
	friend istream& operator >> (istream& in, Rectangle& s);

	Rectangle& operator ++ ();
	Rectangle& operator -- ();
	Rectangle operator ++ (int);
	Rectangle operator -- (int);

	double Square() const;
	double Perimeter() const;

};
