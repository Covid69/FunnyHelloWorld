#!/bin/bash

# Navigate to the project directory
cd "$(dirname "$0")"

# Create a build directory if it doesn't exist
if [ ! -d "build" ]; then
    mkdir build
fi

# Navigate to the build directory
cd build

# Run CMake to generate build files
cmake ..

# Build the project
make

# Check if the build was successful
if [ $? -eq 0 ]; then
    echo "Build successful. Running the program..."
    ./helloworld
else
    echo "Build failed. Please check the errors above."
fi