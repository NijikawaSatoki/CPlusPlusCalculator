/* ===========================================================
 * Multi-Function Calculator
 * ===========================================================
 * 
 * Author: Satoki Nijikawa
 * Version: 1.00c
 * 
 */

#include <iostream>
#include <cmath>
#include "Calculator.h"
using namespace std;

int main() {
	// Initialize the neccessary variables
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';
	
	// Greets the user and provide instructions
	cout << "Terminal Calculator" << endl << endl;
	cout << "Please enter the operation you wish to execute:\nFormat: a+b | a-b | a*b | a/b | a%b" << endl;
	
	// Perform calculations
	Calculator c;
	while (true) {
		cin >> x >> oper >> y;
		if (oper == '/' && y == 0) {
			cout << "error: Attempting to divide by 0" << endl;
			return 0;
		} else if (oper == '%' && y == 0) {
			cout << "error: Attempting to divide by 0" << endl;
			return 0;
		} else {
			result = c.Calculate(x, oper, y);
		}
		cout << "The result is: " << result << endl;
		return 0;
	}
	
	// End of program
	cout << endl;	// Necessary for avoiding awkwardness in terminal
	return 0;
}
