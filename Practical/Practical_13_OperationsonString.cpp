//  Write a C++ program to accept two strings and do the following:
//     1. Compare the two Strings
//     2. Display the length of the strings
//     3. Append the strings.

// Name: Soutrika Das
// Enrollment No: M22074223063

#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    // Compare the two strings
    if (str1 == str2) {
        cout << "The two strings are equal." << endl;
    } else {
        cout << "The two strings are not equal." << endl;
    }

    // Display the length of the strings
    cout << "Length of first string: " << str1.length() << endl;
    cout << "Length of second string: " << str2.length() << endl;

    // Append the strings
    string str3 = str1 + str2;
    cout << "The concatenated string is: " << str3 << endl;

    return 0;
}
