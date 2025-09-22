#include <iostream>
#include <iomanip>  // fixed, setprecision
using namespace std;

int main() {
    double velocity, height;
    const double accGrav = 9.81; // acceleration due to gravity

    cout << "Bernoulli's Equation"<<endl; 
    cout << "-------------------------------"<<endl;
    cout << "Enter the velocity of water (m/s): ";
    cin >> velocity;

    cout << "-------------------------------"<<endl; 
    // Bernoulli equation: h = (v^2) / (2g)
    height = (velocity * velocity) / (2 * accGrav);
    cout << fixed << showpoint << setprecision(2); //iomanip round of to 2 decimal places
    cout << "The water can rise up to " << height << " meters." << endl;

    return 0;
}
