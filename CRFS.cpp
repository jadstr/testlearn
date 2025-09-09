#include <iostream>
using namespace std;


int main() {

int raw, numerical_grade;
string letter_grade;

cout << "Input your grade: ";
cin >> raw;

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
else if (raw >= 95 && raw < 97) {
	numerical_grade = 97;
	letter_grade = "B+";
}
else if (raw >= 93 && raw < 95) {
	numerical_grade = 96;
	letter_grade = "B+";
}
else if (raw >= 92 && raw < 93) {
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
else if (raw >= 87 && raw < 88) {
	numerical_grade = 92;
	letter_grade = "B";
}
else if (raw >= 85 && raw < 87) {
	numerical_grade = 91;
	letter_grade = "B";
}
else if (raw >= 84 && raw < 85) {
	numerical_grade = 90;
	letter_grade = "B";
}


cout << "Numerical Grade: " <<numerical_grade<<endl;
cout << "Letter Grade: " <<letter_grade<<endl;

return 0; 
} 



