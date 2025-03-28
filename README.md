# Funny Hello World

This is a simple C++ project that demonstrates the use of classes, dynamic memory allocation, and namespaces. The program prints the characters of the string "Hello World" one by one, with a delay between each character.

## Project Structure
├── CMakeLists.txt
   ├── helloworld
   │   ├── inc
   │   │   └── helloworld.h
   │   └── src
   │       └── helloworld.cpp
   ├── main.cpp
   └── README.md# Funny Hello World

This is a simple C++ project that demonstrates the use of classes, dynamic memory allocation, and namespaces. The program prints the characters of the string "Hello World" one by one, with a delay between each character.

## Project Structure
├── CMakeLists.txt  
├── helloworld  
│   ├── inc  
│   │   └── helloworld.h  
│   └── src  
│       └── helloworld.cpp  
├── main.cpp  
└── README.md  

## Features

- **Class-Based Design**: The `PrintHelloWorld` class encapsulates the logic for printing the string.
- **Dynamic Memory Management**: Demonstrates the use of `calloc` and `free` for managing memory.
- **Threading and Delays**: Uses the `<thread>` and `<chrono>` libraries to introduce delays between character prints.
- **CMake Build System**: The project uses CMake for building and managing dependencies.

## Prerequisites

- A C++ compiler (e.g., `g++`) that supports C++11 or later.
- CMake (version 3.10 or higher).
- A Linux environment (or any environment with a compatible C++ compiler).

## How to Build and Run

1. Clone the repository:
   ```bash
   git clone https://github.com/Covid69/FunnyHelloWorld.git
   cd FunnyHelloWorld

## Features

- **Class-Based Design**: The `PrintHelloWorld` class encapsulates the logic for printing the string.
- **Dynamic Memory Management**: Demonstrates the use of `calloc` and `free` for managing memory.
- **Threading and Delays**: Uses the `<thread>` and `<chrono>` libraries to introduce delays between character prints.
- **CMake Build System**: The project uses CMake for building and managing dependencies.

## Prerequisites

- A C++ compiler (e.g., `g++`) that supports C++11 or later.
- CMake (version 3.10 or higher).
- A Linux environment (or any environment with a compatible C++ compiler).

## How to Build and Run

1. Clone the repository:
   ```bash
   git clone https://github.com/Covid69/FunnyHelloWorld.git
   cd FunnyHelloWorld
2. Create a build directory and navigate to it:
   ```bash
   mkdir build/
   cd build
3. Generate the build files using CMake:
   ```bash
   cmake ..
4. Build the project:
   ```bash
   make
5. Run the executable:
   ```bash
   ./helloworld

# File Descriptions
- **main.cpp**: Contains the main function, which creates an instance of the PrintHelloWorld class.
- **helloworld.h**: Declares the PrintHelloWorld class and its methods.
- **helloworld.cpp**: Implements the PrintHelloWorld class methods.
- **CMakeLists.txt**: Configures the build process using CMake.
Contributing
Contributions are welcome! Feel free to open an issue or submit a pull request.

### Author
Created by jt.