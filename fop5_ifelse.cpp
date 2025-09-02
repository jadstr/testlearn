#include <iostream>
#include <string>
using namespace std;

int main()
{
		
string password,  User_Name, pass, user;

	cout << "Enter your username: ";
	getline (cin, User_Name);
	cout << "Enter password: ";
	getline (cin, password);
	
	
	
	cout << "Login Username: ";		
	getline(cin, user);
	
	if (user == User_Name){
		cout <<"Welcome"<<endl;
		cout <<"Enter Your Password"<<endl;
		cin >>pass; 
		if (pass == password)
			{
			cout << "Access Granted"<<endl;
		}
		else 
			{
			cout <<"Wrong Password";
		}
			
	{
					
	else {
		cout <<"User Error"<<endl;
	}
}
}
	
}
