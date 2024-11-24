//evenOdd.cpp
//program to find if the number is even, odd or neither i.e, its zero.

#include<iostream>
using namespace std;

int main()
{
	int number;

	cout<<"\nEnter the number:\n";
	cin>>number;

	if (number != 0)
	{
		if (number % 2 == 0)
		{
			cout<<"\nEven number.\n";
		}
		else
		{
			cout<<"\nOdd number.\n";
		}
	}
	else
	{
		cout<<"\nNeither even nor odd, its zero.\n";
	}

	return 0;
}