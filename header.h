
#ifndef DZ7_HEADER_H
#define DZ7_HEADER_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

class Complex{
public:
    double re, im;
    Complex(double x, double y){
        x = re;
        y = im;
    }

    Complex(){
        re = 0;
        im = 0;
    }

    Complex(const Complex &a){
        this-> re = a.re;
        this-> im = a.im;
    }

    ~Complex();
};

class Circle{
public:
    double rad, x, y;
    Circle(double x, double y, double rad){
        this->x = x;
        this->y = y;
        this->rad = rad;
    }

    Circle(){
        x = 0;
        y = 0;
        rad = 1;
    }

    Circle(const Circle &a){
        this-> x = a.x;
        this-> y = a.y;
        this-> rad = a.rad;
    }

    ~Circle();
};

class Vector{
public:
    double x, y , z;
    Vector(double x, double y, double z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Vector(){
        x = 0;
        y = 0;
        z = 0;
    }
    Vector(const Vector &a){
        this->x = a.x;
        this->y = a.y;
        this->z = a.z;
    }
};


#endif //DZ7_HEADER_H
