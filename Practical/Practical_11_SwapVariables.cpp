// Write a menu driven program to swap two numbers using call by value and call by reference.

#include <iostream>
using namespace std;
// Function to swap two numbers using call by value
void swapByValue(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << endl << "Inside swapByValue() method, after swapping: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}

// Function to swap two numbers using call by reference
void swapByReference(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << endl << "Inside swapByReference() method, after swapping: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}

int main() {
    int num1, num2, choice;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    cout << "Before swapping: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    cout << "1. Swap using call by value" << endl;
    cout << "2. Swap using call by reference" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            swapByValue(num1, num2);
            break;
        case 2:
            swapByReference(num1, num2);
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    cout << endl << "After swapping: " << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}