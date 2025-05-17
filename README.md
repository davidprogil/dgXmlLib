# Light Weight XML library for c++

# Getting Started
## How-to integrate
### Code
./src/dgXmlLib.cpp has an example of the code that can be used to read XML files. This file is not part of the library, it is just an example.
### Library
- The library is composed of the files inside ./src/dgXmlLib, 
- To integrate the library in your project, include the files of the library in your project: this depends of your compilation framework (e.g. makefiles, cmake, etc.)
- The file CMakeLists.txt is provided as example, it is for the cmake compilation framework.
### Dependencies
- The library has no dependencies except for the default C/C++ system dependencies.
- The example uses the cmake compilation framework, but this is not required if your project uses some other compilation framework
## How-to compile and run the example
cd src
cmake .
make
./dgXmlLibExample
# Features:
## XML Reading:
- nodes: yes
- attributes: yes
- node contents: yes
- sub-nodes: yes
- empty nodes: yes
- schema validation: no
## XML Writing:
not supported yet
