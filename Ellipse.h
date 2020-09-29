#pragma once

#define PI 3.14159265

class Ellipse
{
private:
	double a;
	double b;

	virtual double calculateArea(double a, double b) { return a * b * PI; }

public:
	Ellipse(double A, double B)
	{
		if(A < 0 ||  B < 0)
			throw("Error");
		a = A;
		b = B;
	}
	Ellipse() : a(0), b(0) {}

	double getA() { return a; }
	double getB() { return b; }
	double getArea(){ return calculateArea(a,b); }

	void setAB(double A, double B)
	{
		if (A < 0 || B < 0)
			throw("Error");
		a = A;
		b = B;
	}

	bool operator<(Ellipse& right) {
		return getArea() < right.getArea();
	}
};

