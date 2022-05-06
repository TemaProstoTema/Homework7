#ifndef HOMEWORK7_HEAD_H
#define HOMEWORK7_HEAD_H

class Complex
{
public:
    void Cin();
    Complex sum(Complex n);
    void Cout();
    double modul();
    Complex ym(Complex n);
    Complex del(Complex n);
    Complex();
    Complex(Complex& );
    Complex(double a, double b);
    ~Complex();
private:
    double im, re;
};

class Vector
{
public:
    Vector();
    Vector(Vector&);
    Vector(double a, double b, double c);
    ~Vector();
    void Cin();
    Vector sum(Vector n);
    void Cout();
    double lenght();
    double scalar(Vector q);
private:
    double x, y, z;
};

class Circle
{
public:
    Circle();
    Circle(Circle&);
    Circle(double a);
    ~Circle();
    void Cin();
    void Cout();
    double square();
private:
    double R;
};
#endif //HOMEWORK7_HEAD_H
