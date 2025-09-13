#include <iostream>
using namespace std;


int main() {

int raw, numerical_grade; // int is needed for the input and output of numbers
string letter_grade; // represents A, B+ .... 

cout << "Input your grade (CRFS): "; // Asks for the Computer Raw Final Score
cin >> raw; // raw as the variable for CRFS

// If statements that checks every input number and convert them into numerical and letter grade

if (raw == 100 && raw < 101) { 
	numerical_grade = 100;
	letter_grade = "A";
}
else if (raw >= 98 && raw < 100) {
	numerical_grade = 99;
	letter_grade = "A";
}
else if (raw >= 96 && raw < 98) {
	numerical_grade = 98;
	letter_grade = "A";
}
else if (raw == 95) {
	numerical_grade = 97;
	letter_grade = "B+";
}
else if (raw >= 93 && raw < 95) {
	numerical_grade = 96;
	letter_grade = "B+";
}
else if (raw == 92) {
	numerical_grade = 95;
	letter_grade = "B+";
}
else if (raw >= 90 && raw < 92) {
	numerical_grade = 94;
	letter_grade = "B+";
}
else if (raw >= 88 && raw < 90) {
	numerical_grade = 93;
	letter_grade = "B";
}
else if (raw == 87) {
	numerical_grade = 92;
	letter_grade = "B";
}
else if (raw >= 85 && raw < 87) {
	numerical_grade = 91;
	letter_grade = "B";
}
else if (raw == 84) {
	numerical_grade = 90;
	letter_grade = "B";
}
else if (raw >= 82 && raw < 84) {
	numerical_grade = 89;
	letter_grade = "C+";
}
else if (raw >= 80 && raw < 82) {
	numerical_grade = 88;
	letter_grade = "C+";
}
else if (raw == 79) {
	numerical_grade = 87;
	letter_grade = "C+";
}
else if (raw == 78) {
	numerical_grade = 86;
	letter_grade = "C+";
}
else if (raw >= 76 && raw < 78) {
	numerical_grade = 85;
	letter_grade = "C";
}
else if (raw >= 74 && raw < 76) {
	numerical_grade = 84;
	letter_grade = "C";
}
else if (raw >= 72 && raw < 74) {
	numerical_grade = 83;
	letter_grade = "C";
}
else if (raw == 71) {
	numerical_grade = 82;
	letter_grade = "C";
}
else if (raw >= 69 && raw < 71) {
    numerical_grade = 81;
    letter_grade = "D+";
}
else if (raw == 68) {
    numerical_grade = 80;
    letter_grade = "D+";
}
else if (raw >= 66 && raw < 68) {
    numerical_grade = 79;
    letter_grade = "D+";
}
else if (raw == 65) {
    numerical_grade = 78;
    letter_grade = "D+";
}
else if (raw >= 63 && raw < 65) {
    numerical_grade = 77;
    letter_grade = "D";
}
else if (raw >= 61 && raw < 63) {
    numerical_grade = 76;
    letter_grade = "D";
}
else if (raw == 60) {
    numerical_grade = 75;
    letter_grade = "D";
}
else if (raw >= 50 && raw < 60) {
    numerical_grade = 74;
    letter_grade = "F";
}
else if (raw >= 40 && raw < 50) {
    numerical_grade = 73;
    letter_grade = "F";
}
else if (raw >= 30 && raw < 40) {
    numerical_grade = 72;
    letter_grade = "F";
}
else if (raw >= 20 && raw < 30) {
    numerical_grade = 71;
    letter_grade = "F";
}
else if (raw < 20) {
    numerical_grade = 70;
    letter_grade = "F";
}
else if (raw > 100){ // if the input number is beyond 100 it outputs an error message
    cout <<"Error CRFS Input"<<endl; 
    return 0; // returns at the start, so it doesn't print a blank output on numerical grade and letter grade below 
}
cout << "Numerical Grade: " <<numerical_grade<<endl; // prints the numerical grade after checking
cout << "Letter Grade: " <<letter_grade<<endl; // prints the letter grade after checking

return 0; 
} 
