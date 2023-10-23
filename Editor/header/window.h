#ifndef WINDOW_H
#define WINDOW_H
#include<string>

class Window{
    std::string m_title;
    public:
    Window(){}
    Window(std::string &title);
    void setTitle(std::string &title);
    std::string getTitle();
    ~Window();
};
#endif