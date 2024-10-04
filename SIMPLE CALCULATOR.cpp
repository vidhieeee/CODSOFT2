#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    
    // Prompt user for two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    // Prompt user for an operation
    cout << "Enter the operation you want to perform (+, -, *, /): ";
    cin >> operation;
    
    // Perform the desired operation and display the result
    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }
    
    return 0;
}
