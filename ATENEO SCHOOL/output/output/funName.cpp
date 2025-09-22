#include <string>
#include <iostream>
using namespace std; 

int main () {
    string firstName, fullName, lastName; 

    cout<<"(Wife): Honey, look at our newborn baby it is so cute!"<<endl;
    cout<<"(Wife): What surname would our baby use? " <<endl; 
    getline(cin,lastName); //Input last name

    cout<<"(Wife): Alright, so our baby's surname would be "<< lastName <<endl; 
    cout<<"(Wife): Can you suggest a name for our child? "<<endl;
    getline(cin, firstName);    // Input firstname

    fullName = firstName + " " + lastName; //combines 2 strings into a single string

    cout<<"(Wife): Wow, That is such a beautiful name! I like it! "<<endl; 
    cout<<"(Wife): My child, "<< fullName << ", I love you so much.";  

    return 0; 
}