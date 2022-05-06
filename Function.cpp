#include "Head.h"
#include <iostream>
#include <cmath>

Complex::Complex(){
    im = 0;
    re = 0;

}
Complex::Complex(Complex& a){
    this->im = a.im;
    this->re = a.re;
    std::cout << "Consturctor copy complete";
}
Complex::Complex(double a, double b){
    im = b;
    re = a;
    std::cout << "costructor complete" << std::endl;
}
Complex::~Complex(){
    std::cout << "destructor complete" << std::endl;
}
void Complex::Cin(){
    std::cout << "Введите реальную и мнимую часть комплексного числа:";
    double a, b;
    std::cin >> a >> b;
    this->re = a;
    this->im = b;
}

Complex Complex::sum(Complex n){
    Complex z;
    z.im = this->im + n.im;
    z.re = this->re + n.re;
}

void Complex::Cout(){
    std::cout << this->re << "+i" << this->im << std::endl;;
}

double Complex::modul(){
    return sqrt(pow(this->im, 2) + pow(this->re, 2));
}

Complex Complex::ym(Complex n){
    Complex z;
    z.re = this->im * n.re + this->re * n.im;
    z.im = (this->im * n.im) * (-1) + this->re * n.re;
}

Complex Complex::del(Complex n){
    Complex z;
    z.re = (this->im * n.re + this->re * (-1) * n.im) / (pow(n.re, 2) + pow(n.im, 2));
    z.im = ((this->im * n.im) * (-1) + this->re * n.re) / (pow(n.re, 2) + pow(n.im, 2));
}



Vector::Vector(){
    x = 0;
    y = 0;
    z = 0;
}

Vector::Vector(Vector& a){
    this->x = a.x;
    this->y = a.y;
    this->z = a.z;
    std::cout << "Consturctor copy complete";
}

Vector::Vector(double a, double b, double c){
    x = a;
    y = b;
    z = c;
    std::cout << "costructor complete" << std::endl;
}

Vector::~Vector(){
    std::cout << "destructor complete" << std::endl;
}

void Vector::Cin(){
    int x1, y1, z1;
    std::cout << "Введите координаты x, y, z:";
    std::cin >> x1 >> y1 >> z1;
    this->x = x1;
    this->y = y1;
    this->z = z1;
}

Vector Vector::sum(Vector n){
    Vector q;
    q.x = this->x + n.x;
    q.y = this->y + n.y;
    q.z = this->z + n.z;
}

void Vector::Cout(){
    std::cout << "{" << this->x << ',' << this->y << ',' << this->z << '}' << std::endl;
}

double Vector::lenght(){
    return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}

double Vector::scalar(Vector q){
    double grad;
    std::cout << "Введите градиент:";
    std::cin >> grad;
    grad = grad * (3.14 / 180);
    return this->lenght() * q.lenght() * cos(grad);
}
Circle::Circle()
{
    R = 0;

}
Circle::Circle(Circle& a)
{
    this->R = a.R;
    std::cout << "costructor complete" << std::endl;
}
Circle::Circle(double a){
    R = a;
    std::cout << "costructor complete" << std::endl;
}
Circle::~Circle()
{
    std::cout << "destructor complete" << std::endl;
}
void Circle::Cin() {
    double R;
    std::cin >> R;
    this->R = R;
}

void Circle::Cout()
{
    std::cout << this->R << std::endl;
}

double Circle::square() {
    return pow(this->R, 2) * 3.14;
}
