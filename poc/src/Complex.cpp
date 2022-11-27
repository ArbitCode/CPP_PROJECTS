#include "../header/Complex.h"
#include <iostream>
Complex::Complex(float x, float y){
    r = x;
    i = y;
}
void Complex::displayData(){
    std::cout << r << ":" << "i" << i << "\n";
}
Complex Complex::operator+(Complex x){
    return Complex( r + x.r, i + x.i);
}
Complex::Complex(){
    float x, y;
    std::cout << "Enter Real and Imaginary Part: " <<"\n";
    std::cin >> x >> y;
    r = x;
    i = y;
}