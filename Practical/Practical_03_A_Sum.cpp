// 3. Write a C++ program to accept two numbers, a float and an integer and display the
// following :-
// a) Sum of two numbers in integer form.

// The most vital command to get this program to run is the static_cast<int>(variable_name). The static cast function helps us denote a certain data type to it's parameter. 

#include<iostream>
using namespace std;
int main(){
    int int_num, sum;
    float float_num;
    cout << "Enter a float: ";
    cin >> float_num;
    cout << "Enter an integer: ";
    cin >> int_num;
    sum = int_num + static_cast<int>(float_num);
    cout << "The sum of the two entered number in integer form is: " << sum << endl;
    return 0;
}