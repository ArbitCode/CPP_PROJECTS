#include "../header/Complex.h"
#include <iostream>

void complex_bar(){
    Complex a = Complex();
    Complex b = Complex();
    std::cout << "a: ";
    a.displayData();
    std::cout << "b: ";
    b.displayData();
    std:: cout << "a + b = ";
    Complex c = a + b;
    c.displayData();
}

int main(){
    std::cout << "--* POC program *--" << std::endl;
    complex_bar();
}