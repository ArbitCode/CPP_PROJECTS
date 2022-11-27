#include "../header/window.h"
#include <iostream>

int main(){
    std::string title = "Hello world!";
    Window *window = new Window(title);
    std::cout << window->getTitle() << std::endl;
}