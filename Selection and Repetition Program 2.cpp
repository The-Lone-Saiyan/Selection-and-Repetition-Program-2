#include <iostream>

using namespace std;

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
		cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		if (num2 == 0)
		cout << "Cannot divide by zero." << endl;
	break;

	default:
		cout << "Error, invalid operator symbol." << endl;
	}

	return 0;
}