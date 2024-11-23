//incermentDecrementCombo.cpp
#include<iostream>
using namespace std;

int main()
{

	int a = 10, b;
	//b = (++a) + (a--);
	++a;
	cout<<"\nAfter increment:\n"<<a;
	b = a + a--;
	cout<<"\nValue of a now:\n"<<a<<"\n";
	cout<<b<<endl;
	return 0;

	/*
	In C++, both of the code snippets you've shared exhibit **undefined behavior** due to modifying the same variable multiple times without a sequence point between the modifications. This can result in inconsistent behavior depending on the compiler and optimization settings.

	Let's analyze both examples in the context of C++.

	---

	### 1. Code with `b = (++a) + (a--)`:

	```cpp
	int a = 10, b;
	b = (++a) + (a--);
	```

	**Undefined Behavior**:  
	In this case, you're modifying `a` twice between sequence points:
	- `++a` increments `a` before the value is used.
	- `a--` decrements `a` after its value is used.

	The order in which these operations are evaluated is not guaranteed in C++. This means the result of `b` depends on the compiler's internal evaluation order, which might not be consistent across different environments.

	Possible outcomes:
	- If the compiler evaluates `++a` first, followed by `a--`, the result will be `b = 11 + 11 = 22`.
	- If the compiler evaluates `a--` first, followed by `++a`, the result might be `b = 10 + 11 = 21`.

	### 2. Code with `b = ++a + ++a + ++a`:

	```cpp
	int a = 10, b;
	b = ++a + ++a + ++a;
	```

	**Undefined Behavior**:  
	Here, you're modifying `a` three times within a single expression. This again results in undefined behavior because there's no sequence point between the modifications, and the order in which the increments happen is not specified.

	The compiler may evaluate the increments in any order, leading to unpredictable results. You could get:
	- If the increments happen left-to-right: `b = 11 + 12 + 13 = 36`.
	- If the increments happen in a different order, the result could vary.

	### What Happens in C++:

	C++ standards explicitly define that modifying a variable more than once between sequence points (e.g., between semicolons or function calls) results in undefined behavior. This is true even if the modification operations are different (like `++a` and `a--`), and even if the operations are part of the same expression.

	### Best Practices:

	To avoid undefined behavior and make your code more predictable and portable across compilers, **always avoid modifying a variable multiple times in a single expression**. Here's how you can refactor both examples to make them well-defined:

	#### Refactored Version 1 (`b = (++a) + (a--)`):
	```cpp
	int a = 10, b;
	++a;   // Increment a to 11
	b = a; // b gets the value of 11
	a--;   // Decrement a back to 10
	b += a; // Add the decremented value of a (10) to b
	```

	#### Refactored Version 2 (`b = ++a + ++a + ++a`):
	```cpp
	int a = 10, b;
	++a;  // Increment a to 11
	b = a;  // b gets the value of 11
	++a;  // Increment a to 12
	b += a;  // Add the value of a (12) to b
	++a;  // Increment a to 13
	b += a;  // Add the value of a (13) to b
	```

	---

	### Summary:
	- Both of the original expressions have **undefined behavior** in C++ due to modifying the same variable multiple times without a sequence point.
	- The behavior might vary depending on the compiler and optimizations.
	- **Refactor** the code into separate statements to avoid modifying the same variable multiple times in a single expression. This ensures predictable, well-defined behavior.


	In the C++ expression:

	```cpp
	int a = 10, b;
	b = ++a + ++a + ++a;
	```

	### Understanding the Expression

	The expression involves modifying the variable `a` three times using the pre-increment operator `++a`, which increments `a` before returning its value. Since there are multiple modifications of `a` within the same expression without a sequence point, this results in **undefined behavior** in C++.

	The key here is that the order in which `++a` is evaluated and the corresponding increments happen **is not guaranteed** by the C++ standard. This means the compiler is free to evaluate the subexpressions in any order.

	### Possible Evaluation Orders

	Given that `++a + ++a + ++a` involves three `++a` operations, let's look at the potential orders in which they might be evaluated:

	#### 1. Left-to-Right Evaluation (One Common Order)

	In this case, the first increment happens first, followed by the second, then the third. This would look like:

	1. **First `++a`:**
	   - Increment `a` to `11`.
	   - Use the value `11` in the expression.
	   - Now `a = 11`.

	2. **Second `++a`:**
	   - Increment `a` to `12`.
	   - Use the value `12` in the expression.
	   - Now `a = 12`.

	3. **Third `++a`:**
	   - Increment `a` to `13`.
	   - Use the value `13` in the expression.
	   - Now `a = 13`.

	**Resulting Value of `b`:**
	- \( b = 11 + 12 + 13 = 36 \)

	---

	#### 2. Right-to-Left Evaluation (Another Possible Order)

	Here, the rightmost `++a` might be evaluated first, followed by the second and then the first:

	1. **Third `++a`:**
	   - Increment `a` to `11`.
	   - Use the value `11` in the expression.
	   - Now `a = 11`.

	2. **Second `++a`:**
	   - Increment `a` to `12`.
	   - Use the value `12` in the expression.
	   - Now `a = 12`.

	3. **First `++a`:**
	   - Increment `a` to `13`.
	   - Use the value `13` in the expression.
	   - Now `a = 13`.

	**Resulting Value of `b`:**
	- \( b = 11 + 12 + 13 = 36 \)

	This gives the same result as the left-to-right evaluation in this case, but the order in which the increments occur may still differ.

	---

	#### 3. Mixed or Interleaved Evaluation (Another Possible Order)

	The compiler might choose to evaluate the increments in a different interleaved order. For example:

	1. **First `++a`:**
	   - Increment `a` to `11`.
	   - Use the value `11`.

	2. **Second `++a`:**
	   - Increment `a` to `12`.
	   - Use the value `12`.

	3. **Third `++a`:**
	   - Increment `a` to `13`.
	   - Use the value `13`.

	Or it could evaluate some terms in parallel or out-of-order depending on optimizations.

	**Resulting Value of `b`:**
	- \( b = 11 + 12 + 13 = 36 \) (same result as above).

	### Important Notes:

	- In C++, modifying the same variable multiple times in a single expression without a sequence point (like the semicolon separating expressions) results in **undefined behavior**. Therefore, even though we are seeing `36` in some cases above, the result might vary depending on the compiler, optimization settings, or evaluation order, leading to **non-deterministic behavior**.
	  
	- You **cannot** rely on the order in which `++a` is evaluated because it is undefined behavior. This means that the result may change depending on the compiler, compiler version, optimization levels, or platform, and could lead to unexpected results like `b = 34`, `b = 33`, or other values.

	### Conclusion:

	To summarize, there are multiple possible orders in which the increments and additions could happen, but all of these are **undefined behavior** in C++. The safest and most predictable way to modify a variable multiple times is to split the increments into separate statements, like so:

	```cpp
	int a = 10, b;
	++a;  // Increment a to 11
	b = a;  // Store the value of a (11) in b
	++a;  // Increment a to 12
	b += a;  // Add 12 to b
	++a;  // Increment a to 13
	b += a;  // Add 13 to b
	```

	This approach avoids undefined behavior and ensures predictable results.
	*/
}