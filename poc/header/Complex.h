#ifndef COMPLEX_H
#define COMPLEX_H
class Complex{
    float r;
    float i;
    int a;
    public:
    void displayData();
    Complex();
    Complex(float x, float y);
    Complex operator+(Complex x);
};
#endif