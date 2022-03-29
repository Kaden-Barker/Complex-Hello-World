#include <iostream>
#include "hello.h"

using namespace std;

int main() {
    string text;
    cout << "Enter your message: " << endl;
    cin >> text;

    HelloWorld hello(text);


    return 0;
}

