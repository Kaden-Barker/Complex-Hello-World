#include <string> 

#ifndef HELLO_H
#define HELLO_H

using namespace std;

class HelloWorld {
    private:
    string text_;

    public:
    // Constructor
    HelloWorld(string text) : text_(text) {}

    // Displays
    void display(string text_);

};

#endif
