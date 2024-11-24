//exampleProgram.cpp
//playing around with for-loop.

#include<iostream>
using namespace std;

int main()
{
	int num = 5;

	for (int i = 1; i <= num; ++i)
	{
		cout<<i<<endl;
		i++;
	}
	
	int num_arr[] = {1,2,3,4,5,6,7,8};

	//range based for loop in c++
	for(int n : num_arr)
	{
		cout<<n<<" ";
	}
	cout<<"\n";

	/*
	cout<<i<<endl;
	This throws an error as i was not declared in the main functions scope, it was declared
	only inside the scope of for loop.
	*/
	return 0;
}
