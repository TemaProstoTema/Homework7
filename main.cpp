#include <iostream>
#include "Head.h"


int main(){
    double im, re;
    std::cout << "Введите re и im:";
    std::cin >> re >> im;
    Complex a(re, im), c, s, x;
    std::cout << "Введите re и im:";
    std::cin >> re >> im;

    Complex b(re, im);
    double q, w, e;
    double x1, y1, z1;
    Complex t(a);
    t.Cout();
    c = a.sum(b);
    q = a.modul();
    s = a.ym(b);
    x = a.del(b);
    c.Cout();
    s.Cout();
    x.Cout();
    std::cout << q << std::endl;
    std::cout << "Введите x,y,z:";
    std::cin >> x1 >> y1 >> z1;

    Vector a1(x1, y1, z1), c1;
    std::cout << "Введите x,y,z:";
    std::cin >> x1 >> y1 >> z1;

    Vector b1(x1, y1, z1);
    Vector t1(a1);
    t1.Cout();
    c1 = a1.sum(b1);
    w = a1.lenght();
    e = a1.scalar(b1);
    c1.Cout();
    std::cout << w << ' ' << e;
    Circle a2; double square;
    a2.Cin();

    Circle t2(a2);
    t2.Cout();
    square = a2.square();
    a2.Cout();
    std::cout << square;
}