// Write a C++ program to accept a number. Using conditional operator print whether the number is even or odd

#include<iostream>
using namespace std;
int main(){
    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;
    if(userInput%2==0){
        cout << "The number is even." << endl;
    }
    else{
        cout << "The number is odd." << endl;
    }
    return 0;
}