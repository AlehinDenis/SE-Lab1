#pragma once
#include "Ellipse.h"

class Circle : public Ellipse
{
private:
	double r;

	double calculateArea(double r) { return PI * r * r; }
public:
	Circle() : r(0) {}
	Circle(double R) 
	{
		if(R < 0)
			throw("Error");
		r = R;
	}
	Circle(double a, double b) 
	{
		if (a != b)
			throw("Error");
		r = a;
	}
	
	double getR() { return r; }
	double getArea() { return calculateArea(r); }

	void setR(double R) 
	{ 
		if (R < 0)
			throw("Error");
		r = R;
	}

	bool operator<(Circle& right) {
		return getArea() < right.getArea();
	}
};

