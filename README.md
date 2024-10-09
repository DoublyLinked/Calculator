This is a simple command-line calculator written in C++. It supports basic arithmetic operations including:
  Addition (+)
  Subtraction (-)
  Multiplication (*)
  Division (/)
The calculator takes two numbers and an arithmetic operator as input,
performs the calculation, and outputs the result.
Additionally, it includes error handling for division by zero and invalid operators.

Features
  Addition, Subtraction, Multiplication, and Division.
  Input validation for invalid operators.
  Error handling for division by zero.
Requirements
  A C++ compiler (e.g., g++ or clang++).
  Command-line interface (CLI) access.
How to Compile and Run
  Clone or download the source code.

Compile the program using a C++ compiler. If you are using g++,
you can run the following command in your terminal:
  g++ main.cpp -o calculator
Run the program:
  ./calculator

Usage
  Once you run the program, it will ask for user input in the following order:

  First number.
  Arithmetic operator (+, -, *, /).
  Second number.
  After inputting the data, the program will output the result of the operation.
  
Example:
  Enter first number: 8
  Enter an operator (+, -, *, /): *
  Enter second number: 3
  Result: 24
  
Division by Zero Handling:
  If you attempt to divide by zero, the program will display an error:
    Enter first number: 10
    Enter an operator (+, -, *, /): /
    Enter second number: 0
    Error: Division by zero!

Invalid Operator Handling:
  If you input an invalid operator, the program will display an error and exit:
    Enter first number: 5
    Enter an operator (+, -, *, /): ^
    Error: Invalid operator!

Future Improvements
  Some possible features to add in the future:
    Support for more complex mathematical operations (e.g., modulus, exponentiation).
    Allow users to perform multiple operations in one run.
    Implement a continuous loop to allow multiple calculations without restarting the program.
