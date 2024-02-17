#include <iostream>

using namespace std;

//Basic Calculator program, user inputs the first number, operator, and second number.
// Final display is the solution depending on which operator is chosen.
// Error messages will display if trying to divide by zero or if incorrect operator character is used.

double num1, num2;
char operand;

int main()
{
	cout << "Please enter two numbers separated by an operator(+, -, *, /):" << endl;
	cin >> num1 >> operand >> num2;

	switch (operand)
	{
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	break;

	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	break;

	case '*':
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	break;

	case '/':
		if (num2 == 0)
			cout << "Cannot divide by zero." << endl;
		else
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	break;

	default:
		cout << "Error, invalid operator symbol." << endl;
	}

	return 0;
}