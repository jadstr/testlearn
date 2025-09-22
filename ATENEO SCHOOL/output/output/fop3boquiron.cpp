#include <iostream>
using namespace std;

int main() {
    string fullName, nickName, course, school, reason, year, interest, hobbies;

    cout << "**************************************" <<endl
         << "What is your full name, my friend?" <<endl
         << "**************************************" <<endl
         << "My name is: "; // His name is Paolo Velasco
    getline(cin, fullName);

    cout << "**************************************" <<endl 
         << "Greetings, " << fullName << "!" <<endl;  // Outputs his fullName

    cout << "**************************************" <<endl
         << "Tell me your nickname." <<endl 
         << "**************************************" <<endl
         << "You can call me: "; // His nickname is Pao
    getline(cin, nickName);

    cout << "**************************************" <<endl
         << "It is nice to meet you, " << nickName << "!" <<endl; // Prints his nickName

    cout << "**************************************" <<endl
         << "I am Jad Paulo V. Boquiron," <<endl
         << "but you can call me Jad." <<endl;

    cout << "**************************************" <<endl
         << "What school are you from? "<<endl // He is from Ateneo De Naga University
         << nickName << ": I am from "; 
    getline(cin, school);

    cout << "Wow, same! I am from " << school << " as well." <<endl;

    cout << "**************************************" <<endl
         << "Why did you choose " << school << "? "<<endl // He graduated from SHS in ADNU, that is why he wanted to continue here
         << nickName <<": I chose "<< school << " because ";  
    getline(cin, reason);

    cout << "Oh that must be nice!" <<endl;

    cout << "**************************************" <<endl
         << "What course are you taking? "<<endl // Computer Science
         << nickName <<": I am taking "; 
    getline(cin, course);

    cout << "Nice! " << course << " I take " << course << " too ! "<<endl;

    cout << "**************************************" <<endl
         << "What year are you in? " <<endl // He is a freshman 
         << nickName <<": I am a "; 
     getline(cin, year);

    cout << "Great, so you are in " << year << " year." <<endl;

    cout << "**************************************" <<endl
         << "What are your interests in the " << course << " field? "<<endl// He is curious aboud cloud engineering
         << nickName <<": I am interested in "; 
    getline(cin, interest);

    cout << "That is awesome! I also like " << interest << "." <<endl;  
    cout << "**************************************" <<endl
         << "What are your hobbies? "<<endl // He likes to draw
         << nickName <<": My hobbies are "; 
    getline(cin, hobbies);

    cout << "Cool! Hobbies like " << hobbies << " are fun." <<endl
    << "**************************************" <<endl; 
    cout <<" _________________" <<endl
         <<"|_________________|" <<endl 
         <<"|                 |" <<endl
         <<"|  (__)     (__)  |" <<endl
         <<"|      _____      |" <<endl
         <<"|    <_______>    |" <<endl
         <<"|_________________|" <<endl
         <<" "<<endl 
         << "It was fun meeting you " << nickName <<endl 
         << "I hope we enjoy " << course << " together! "<<endl 
         << "Let's get to know each other more!"; 

        
    return 0; 
}