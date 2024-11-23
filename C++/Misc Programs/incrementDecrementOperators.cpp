//incrementDecrementOperators.cpp
#include<iostream>
using namespace std;

int main()
{
	int a =10, b;
	// cout<<"\nThe Value of a = "<<a;
	// cout<<"\nUsing a++ we get: \n";
	// cout<<a++;
	// cout<<"\nAfter a++ the value of a is "<<a;
	// cout<<"\nUsing ++a we get:\n";
	// cout<<++a;
	// cout<<"\nNow the Value of a is "<<a;


	b = (++a) + (++a) + (++a);
	/*
	Evaluation of ++a + ++a + ++a:

	First ++a:
	a is incremented to 11.
	The value 11 is used in the expression.
	
	Second ++a:
	a is incremented again to 12.
	The value 12 is used in the expression.
	
	Third ++a:
	a is incremented once more to 13.
	The value 13 is used in the expression.
	
	Final expression:
	b = 11 + 12 + 13
	b = 36
	
	Therefore, the final values are:
	a = 13
	b = 36


	But when executing the code on gcc/g++ compiler
	the output is:
	a = 13
	b = 37

	Possible Reasons for the Discrepancy:

	Compiler Optimization:

	Some compilers might optimize the code in ways that lead to unexpected results, especially when dealing with increment/decrement operators and complex expressions.
	This could involve reordering operations or caching values in registers, which might affect the final outcome.
	Specific Compiler Behavior:

	Different compilers might have different interpretations of the language standard or specific implementation details.
	It's possible that the compiler you're using is treating the expression in a non-standard way.
	To Verify the Behavior:

	Try a Different Compiler:

	Use a different compiler, such as GCC or Clang, to see if you get the same result.
	This can help isolate the issue to a specific compiler implementation.
	Consult the Compiler Documentation:

	Refer to the documentation of your specific compiler to understand any potential optimizations or quirks that might be affecting the evaluation.
	Break Down the Expression:

	Try breaking down the expression into smaller steps to isolate the issue:
	C++
	int a = 10, b;
	a++;
	b = a + a++;
	a++;
	b += a;
	

	//Trying with spplitting the expression.
	a++;
	cout<<"\nFirst increment:\n"<<a;
	b = a + a++;
	cout<<"\nSecond increment:\n"<<a;
	cout<<"\nValue of b right now:\n"<<b;
	a++;
	cout<<"\nLast increment:\n"<<a;
	b += a;
	cout<<"\nValue of b now:\n"<<b;
	cout<<"\n";
	*/
	cout<<a<<endl;
	cout<<b<<endl;
	//Its working fine and as expected now.
	return 0;
}