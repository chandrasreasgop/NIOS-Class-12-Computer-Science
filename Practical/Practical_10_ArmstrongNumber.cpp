// Write a C++ program using for loop to find whether the number is an Armstrong number or not.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, originalNum, remainder, digits = 0, result = 0;
    cout << "Enter a positive integer: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    for (int i = 0; i < digits; i++) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    if (result == num) {
        cout << num << " is an Armstrong num." << endl;
    } else {
        cout << num << " is not an Armstrong num." << endl;
    }

    return 0;
}
