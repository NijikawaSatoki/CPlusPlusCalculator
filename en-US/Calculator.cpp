#include <cmath>
#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper) {
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		case '%':
			return fmod(x, y);
		case '^':
			return pow(x, y);
		default:
			return 0.0;
	}
}
