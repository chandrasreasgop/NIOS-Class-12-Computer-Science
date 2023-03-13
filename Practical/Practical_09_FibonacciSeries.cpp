// Write a program using do..while loop to display the Fibonacci series 0, 1, 1, 2, 3, 5… n
#include<iostream>
using namespace std;
int main(){
    int n, num1 = 0, num2 = 1, next;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "The Fibonacci Series is: " << endl;
    cout << num1 << " " << num2 << " ";

    int i = 2;
    do{
        next = num1 + num2;
        cout << next << " ";
        num1 = num2;
        num2 = next;
        i++; 
    } while (i < n);
    
    return 0;
}