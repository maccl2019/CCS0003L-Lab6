#include<iostream>
using namespace std;

/* Activity 6.1.
Using while loop, calculate the product of two numbers 
without using the multiplication (*) operator */

int main() {
	
	int num1, num2, result = 0;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	while(num2 >= 1) {
		result += num1;
		num2--;
	}
	
	cout << "Product: " << result;
	return 0;
	
}
