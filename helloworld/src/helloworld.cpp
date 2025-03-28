#include "helloworld.h"

// Constructor implementation
PrintHelloWorld::PrintHelloWorld(char* input_str)
    : _to_print(input_str)  // Initialize _to_print
{
    _found_str = (char*)calloc(strlen(_to_print) + 1, sizeof(char));
    for (int i = 0; i < 255; i++)
    {
        _utf_8_char[i] = (char)i;
    }
    for (int i = 0; i < strlen(_to_print); i++)
    {
        _look_for_char(_to_print[i]);
        _found_str[i] = _to_print[i];
    }
}

// Destructor implementation
PrintHelloWorld::~PrintHelloWorld()
{
    if (_found_str != nullptr) {
        free(_found_str);  // Free the dynamically allocated memory
        _found_str = nullptr;  // Set pointer to nullptr to avoid dangling pointer
    }
    std::cout << "Destructor called, memory freed." << std::endl;
}

// Private function implementation
void PrintHelloWorld::_look_for_char(char c)
{
    for (int i = 0; i < 255; i++)
    {
        if (_utf_8_char[i] == c)
        {
            std::cout << _found_str << _utf_8_char[i] << std::endl;
            return;
        }
        std::cout << _found_str << _utf_8_char[i] << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    std::cout << "Character not found" << std::endl;
}