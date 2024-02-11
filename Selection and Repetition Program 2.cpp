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
	break;

	case operand == '/' && num2 == 0:
		cout << "Cannot divide by zero." << endl;
	break;

	case (operand != '+' && operand != '-' && operand != '*' && operand != '/')
		cout << "Error, invalid operator symbol." << endl;
	break;
	}

	return 0;
}