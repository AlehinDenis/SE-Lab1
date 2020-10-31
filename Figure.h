#pragma once

#define PI 3.14

class Figure {
public:
    virtual double area() = 0;
};

class Ellipse: public Figure {
private:
    double a;
    double b;
    
public:
    Ellipse(double A, double B) {
        if (A < 0) throw "Error: a < 0";
        if (B < 0) throw "Error: b < 0";
        
        a = A;
        b = B;
    }

    double area() override {
        return PI * a * b;
    }
};

class Circle: public Figure {
private:
    double r;

public:
    Circle(double R) {
        if (R < 0) throw "Error: r < 0";
        r = R;
    }

    double area() override {
        return PI * r * r;
    }
};
