#include "../../header/window.h"

Window::Window(std::string &title){
    m_title = title;
}

std::string Window::getTitle(){
    return m_title;
}

void Window::setTitle(std::string &title){
    m_title = title;
}
Window::~Window(){
}