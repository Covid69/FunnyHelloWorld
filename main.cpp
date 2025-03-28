#include "helloworld.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_str;
    cout << "Enter a string: ";
    getline(cin, input_str);  // Read the entire line, including spaces

    // Convert the string to a C-style string and pass it to the constructor
    PrintHelloWorld obj(const_cast<char*>(input_str.c_str()));

    return 0;
}