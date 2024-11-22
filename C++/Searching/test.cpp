#include<iostream>

using namespace std;

int main()
{
	int i, j, k;
	int input;


	cout << "Enter the input number: " << endl;
	cin >> input;


	int num[input];

	for(i = 1; i <= input; i++)
	{
		if(input % i == 0)
			num[i] = i;
	}

	for(j = 0; j < input; j++)
	{
		for(k = 0; k < input; k++){
			if(input == num[j] * num[k])
			{
				cout << num[j] << "x" << num[k] << "=" << input << endl; 
			}
		}
	}
}