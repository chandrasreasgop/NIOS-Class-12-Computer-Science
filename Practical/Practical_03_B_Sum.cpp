// 3. Write a C++ program to accept two numbers, a float and an integer and display the
// following :-
// b) Sum of two numbers in float form

#include<iostream>
using namespace std;
int main(){
    int int_num;
    float float_num, sum;
    cout << "Enter a float: ";
    cin >> float_num;
    cout << "Enter an integer: ";
    cin >> int_num;
    sum = float_num + static_cast<float>(int_num);
    cout << "The sum of the two entered numbers in float form are: " << sum <<endl;
    return 0;
}