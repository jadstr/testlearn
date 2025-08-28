
#include <iostream>
using namespace std;
int main()
{
string firstName, lastName, fullName; 

    cout << "What is your first name? ";
    cout << " " << endl;
    cout << "(???): My first name is ";
    getline (cin, firstName);
    cout << " " << endl;
    cout << "What is your last name?" ;
    cout << " " << endl;
    cout << "(???): My last name is ";
    getline (cin, lastName);
    cout << " " << endl;

fullName = firstName + " " + lastName;

    cout << "Your full name is " << fullName; 
    
return 0;
}
