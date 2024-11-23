//implicitConversion.cpp
#include<iostream>
using namespace std;

int main()
{
	/*
	//Declaring and initializing an integer type variable
	int num_int = 9;
	//Declaring a double type variable
	double num_double;

	//implicit Conversion
	num_double = num_int;

	cout<<"num_int = "<<num_int<<endl;
	cout<<"num_double = "<<num_double<<endl;
	return 0;
	*/

	//Declaring an integer type variable
	int num_int;
	//Declaring and initializing a double type variable
	double num_double = 9.5f;

	//implicit Conversion
	num_int = num_double;

	cout<<"num_int = "<<num_int<<endl;
	cout<<"num_double = "<<num_double<<endl;
	return 0;
}