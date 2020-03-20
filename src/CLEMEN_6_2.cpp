#include<iostream>
using namespace std;

/* Activity 6.2. Using do while loop, write a program that will ask the user 
to input an integer number. Compute for the factorial value. 
Factorial is the product of all positive integers less than or 
equal to n. */

int main() {
	
	int input;
	unsigned long long int factorial = 1;
	
	cout << "Enter an integer number: ";
	cin >> input;
	
	cout << "The factorial of " << input << " is: ";

	do {
		factorial *= input;
		input--;
	} while(input >= 1);
	
	cout << factorial;
	
	return 0;
}
