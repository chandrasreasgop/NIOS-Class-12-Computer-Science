// Create three functions by the name CALCULATE() according to the prototypes
// given below:
// # void CALCULATE(int) // to check whether the argument being
// passed is even or odd
// # int CALCULATE(int, int) // to return the sum of two numbers being
// passed as arguments.
// # void CALCULATE() // to display the message “ YOU ARE
// DOING GREAT”

#include<iostream>
using namespace std;
void CALCULATE(int num1) {
    if (num1 % 2 == 0){
        cout << "The entered number is even. " << endl;
    } else{
        cout << "The entered number is odd. " << endl;
    } 
}

int CALCULATE(int a, int b){
    return a + b;
}

void CALCULATE(){
    cout << "YOU ARE DOING GREAT." << endl;
}

int main(){
    int num, a, b;
    cout << "Enter a number to check if it is even or odd: ";
    cin >> num;
    CALCULATE(num);

    cout << endl << "Enter two numbers to find their sum: ";
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b <<" is "<< CALCULATE(a,b) << endl << endl;

    CALCULATE();

    return 0;
}