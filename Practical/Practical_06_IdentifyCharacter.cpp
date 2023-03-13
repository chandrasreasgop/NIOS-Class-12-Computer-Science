//Write a  C++ program to accept a character. Print whether the character is an alphabet, digit, or a special character. Display appropriate messages.
#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char userInput;
    cout << "Enter a character: ";
    cin >> userInput;
    if (isalpha(userInput)){
        cout << "The character is an alphabet." << endl;
    } 
    else if (isdigit(userInput)){
        cout << "The character is a digit." << endl;
    }
    else {
        cout << "The character is a special character." << endl;
    }
    return 0;
}