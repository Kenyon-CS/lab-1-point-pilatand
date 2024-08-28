# PointClass
A Point class with driver code

## Key Features:
1. Point Class:
   * Constructors:
      * Default constructor initializes x and y to 0.0.
      * Parameterized constructor initializes x and y to given values.
   * Operator Overloads:
      * operator==: Compares two Point objects for equality based on their coordinates.
      * operator-: Computes the Euclidean distance between two Point objects.
  * Getters: GetX() and GetY() to retrieve the x and y coordinates.
  * Setters: SetX(double) and SetY(double) to modify the x and y coordinates.
2. Test Driver:
  * Demonstrates the use of the constructors, setters, getters, and overloaded operators.
  * Tests the distance calculation and equality comparison between points.

# How to Use the Makefile
1. Build the Program: Run make in the terminal. This will compile the source files and create the point_program executable.
```
sh
Copy code
make
```
2. Clean the Build: Run make clean to remove the compiled object files (.o files) and the executable.
```
sh
Copy code
make clean
```
## Makefile Breakdown:

  * Variables:
    * CXX: Specifies the C++ compiler (g++).
    * CXXFLAGS: Compiler flags, -Wall enables all compiler warnings, and -std=c++11 specifies the C++11 standard.
  * Targets:
    * all: The default target that builds the program.
    * $(TARGET): The target to build the executable by linking object files.
    * main.o and Point.o: Targets to compile .cpp files into object files.
    * clean: Target to remove generated files (.o and the executable).
  * Dependencies:
    * Each .o file depends on the corresponding .cpp file and the Point.h header file.
  * Commands:
    * $(CXX) $(CXXFLAGS) -c: Compiles the .cpp file into an object file.
    * $(CXX) $(CXXFLAGS) -o: Links the object files to create the executable.
