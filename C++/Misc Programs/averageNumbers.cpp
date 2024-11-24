//averageNumbers.cpp
#include<iostream>
using namespace std;

int main()
{
	int no_of_inputs, i;
	float num, avg, sum = 0.0;

	cout<<"\nEnter max number of inputs:\n";
	cin>>no_of_inputs;

	for (i = 1; i <= no_of_inputs; ++i)
	{
		cout<<"\nEnter the "<<i<<" number:\n";
		cin>>num;

		if (num < 0.0)
		{
			//move control to jump as negative num is found
			goto jump;
		}

		sum += num;
	}

	jump:
	avg = sum/(i-1);
	cout<<"\nAverage is "<<avg<<endl;

	return 0;
}