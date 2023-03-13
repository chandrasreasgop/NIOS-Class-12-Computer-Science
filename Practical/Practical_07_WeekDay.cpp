// Write a C++ program to accept a number and display the corresponding number of week day E.g., If the user enters “1” display “ Monday”, if the user enters “2” display “ Tuesday”…… and so on.
#include<iostream>
using namespace std;
int main(){
    int userInput;
    cout << "Enter a number (1-7): ";
    cin  >> userInput;
    switch (userInput)
    {
    case 1:
        cout << "The corresponding week day is Monday." << endl;
        break;
    case 2:
        cout << "The corresponding week day is Tuesday." << endl;
        break;
    case 3:
        cout << "The corresponding week day is Wednesday." << endl;
        break;
    case 4:
        cout << "The corresponding week day is Thursday." << endl;
        break;
    case 5:
        cout << "The corresponding week day is Friday." << endl;
        break;
    case 6:
        cout << "The corresponding week day is Saturday." << endl;
        break;
    case 7:
        cout << "The corresponding week day is Sunday." << endl;
        break;
    default:
        cout << "Invalid input!" << endl;
        break;
    }
    return 0;
}