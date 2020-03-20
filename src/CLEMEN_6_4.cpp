#include<iostream>
using namespace std;

/* Activity 6.4. Using any loop structure, write a program that computes for 
the sum of the natural numbers from 1 up to the positive integer entered by the user. */

int main() {
	
	int input, sum;
	
	cout << "Enter a number: ";
	cin >> input;
	
	cout << "The sum of 1 to " << input << " is ";
	
	for(int i = 1; i <= input; i++) {
		sum += i;
	}
	
	cout << sum << endl;
	
	return 0;
}
