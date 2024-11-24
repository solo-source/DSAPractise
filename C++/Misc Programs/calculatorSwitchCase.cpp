//calculatorSwitchCase.cpp
#include<iostream>
using namespace std;

int main()
{
	char op;
	double num1, num2, result;

	cout<<"\nEnter first number:\n";
	cin>>num1;
	cout<<"\nEnter second number:\n";
	cin>>num2;
	cout<<"\nSelect the operators(+,-,/,*):\n";
	cin>>op;

	switch(op)
	{
	case '+':
		result = num1 + num2;
		cout<<"\nAddition is "<<result<<endl;
		break;
	case '-':
		result = num1 - num2;
		cout<<"\nSubtraction is "<<result<<endl;
		break;
	case '/':
		result = num1 / num2;
		cout<<"\nDivision is "<<result<<endl;
		break;
	case '*':
		result = num1 * num2;
		cout<<"\nMultiplication is "<<result<<endl;
		break;
	default:
		cout<<"\nInvalid Input.\n";
	}

	/*
	Here's a rewritten version of the text:

	Without a `break` statement, when a `case` label matches the value of the `switch` expression,
	the program will continue executing the code for subsequent `case` labels until it encounters a
	`break` statement or the end of the `switch` block.
	*/

	return 0;
}