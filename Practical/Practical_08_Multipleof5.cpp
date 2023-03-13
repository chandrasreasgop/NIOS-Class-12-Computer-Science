// Write a C++ program (using while loop ) to display all the multiples of 5 from 100 to 50.

#include<iostream>
using namespace std;
int main(){
    int num = 100;
    cout << "The multiples of 5 from 100 to 50 are: "<< endl;
    while(num>=50){
        if (num%5==0){
            cout << num << endl;
        }
        num--;
    }
    return 0;
}