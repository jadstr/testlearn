#include <iostream>
using namespace std; 
	
	int main() {
	
	int n_of_n, counter, total, number, average; 
	cout << "Enter the starting number" << endl;
	cin >> n_of_n;
	
	counter = 0;
	total = 0;
	
	while (counter < n_of_n) {
	cout << "Enter the next number "<< endl;
	cin >> number;
	total = number + total; 
	cout << "TOTAL: " << total <<endl;
	counter = counter + 1; 
}

	average = total / n_of_n;
	cout << "Average is " << average;
	
}

	
	
	
	
