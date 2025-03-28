#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <iostream>
#include <cstring>
#include <chrono>
#include <thread>

class PrintHelloWorld
{
public:
    // Constructor
    PrintHelloWorld(char* str = nullptr);

    // Destructor
    ~PrintHelloWorld();

private:
    // Private member variables
    char _utf_8_char[255];
    const char* _to_print;
    char* _found_str;

    // Private member functions
    void _look_for_char(char c);
};

#endif // HELLOWORLD_H