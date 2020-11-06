#include <iostream>
using namespace std;

// three global variable
int firstNumber = 0;
int secondNumber = 0;
int multiResult = 0;

void MultiNumbers ()
{
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    // Multi two numbers
    multiResult = firstNumber * secondNumber;

    // Display result

    cout << "Display from MutiNumbers: ";

    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiResult << endl;

}

int main() {
    cout << "This program will help you multi two numbers" << endl;

    // Call the functions that does all the work
    MultiNumbers();

    cout << "Display from main(): ";

    // This line will compile and work
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiResult << endl;
    return 0;
}