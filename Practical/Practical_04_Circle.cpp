// Write a C++ program that accepts radius and then displays the area and perimeter of a circle. Consider “Pi” as a constant with value 3.14
// The following program uses the pow() function of the cmath library to square the radius to multiple it with the value of pi to calculate the area of the mentioned circle.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    const float pi = 3.14;
    float radius, area, perimeter;

    cout<<"Enter the radius of the circle: ";
    cin >> radius;

    area = pi * pow(radius,2);
    perimeter = 2 * pi * radius;

    cout << "Area of the Circle: " << area << endl;
    cout << "Perimeter of the Circle: " << perimeter << endl;
    return 0;
}