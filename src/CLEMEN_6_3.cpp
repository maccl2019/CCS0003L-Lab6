#include<iostream>
using namespace std;

/* Activity 6.3. Using for nested loop, write a program that will ask for an integer number. 
Based from the input display the following output. */

int main() {
	
	int size;
	
	cout << "Enter a number: ";
	cin >> size;
	
	for(int i = 1; i <= size; i++) {
		for(int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
