
#include <iostream>
#include <iomanip>  // needed for fixed, showpoint, setprecision
using namespace std;

int main() {
    double radius, diameter, area;  // changed to double for precision
    double pi = 3.14159265359; 

    cout << "Enter the diameter of a circle: "; // input the diameter
    cin >> diameter;

    radius = diameter / 2.0; // formula for radius
    cout << endl; 
    cout << fixed << showpoint << setprecision(3); // formatting output

    cout << "The radius of the circle is: " << radius << endl; // output radius
    cout << endl;

    area = pi * radius * radius; // formula for area

    cout << "The area is " << area << " square meters" << endl; // output area
    cout << endl; 

    return 0; 
}
