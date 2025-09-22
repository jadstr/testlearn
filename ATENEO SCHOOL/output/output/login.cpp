#include <iostream>
#include <string>
using namespace std;

int main()
{
string UserName, PassWord, Input_UN, Input_PW, Confirm_PW; //variables for inputs and 
char Yes_No; //var for yes or no question in line 19

    cout << "Create an account"<<endl; //start
    cout <<"___________________"<<endl<<" "<<endl; 
    cout <<"Enter your desired username: "; // create username
    getline (cin, UserName);
    cout <<"___________________"<<endl<<" "<<endl;
    cout <<"Create your password: "; //create password
    getline  (cin, PassWord);
    cout <<"___________________"<<endl<<" "<<endl;
    cout <<"Confirm your password: ";
    getline (cin, Confirm_PW);
    if (Confirm_PW == PassWord) {

    cout <<"___________________"<<endl<<" "<<endl<<" "<<endl;
    cout <<"Hello "<<UserName<<", your account has been saved!"<<endl<<" "<<endl; 
    cout << "Do you want proceed to log in? (y/n): "; //asks to proceed with the login
    cin >> Yes_No;

    if (Yes_No == 'y' || Yes_No == 'Y') { //if yes login
        cout << "________ LOGIN _________" << endl;
        cout << "Enter username: "; //enter the created user
        cin >> Input_UN;
        cout <<"___________________"<<endl<<" "<<endl;
        cout << "Enter password: "; //enter the created pass
        cin >> Input_PW;

        if (Input_UN == UserName && Input_PW == PassWord) {
            cout <<"___________________"<<endl<<" "<<endl;
            cout << "Login successful! Welcome, " << UserName << "!" << endl; //if the input is correct, login successful
        } else {
            cout << "Error Occured. Incorrect username or password. " << endl; //if the input is incorrect, error occured
        }
    } else {
        cout << "You chose not to log in. Goodbye! " << endl; // if N or any text except Y is chosen, stop the program
    }
    
    return 0;
    } else {
    cout <<"ERROR: Password Did not Match "<<endl<<" "<<endl;
    cout << "--------Try Again--------"<<endl; 
    return 0;
    }







}