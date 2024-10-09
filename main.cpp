#include <iostream>
using namespace std;

int main() {
    double num1, num2;     // Variables to store two numbers
    char operation;        // Variable to store the operator (+, -, *, /)
    double result;         // Variable to store the result

    // Asking the user to input the numbers and the operator
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    
    cout << "Enter second number: ";
    cin >> num2;

    // Perform the operation based on the operator input
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Division by zero!" << endl;
                return 1;  // Exit the program with an error code
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            return 1;  // Exit the program with an error code
    }

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
