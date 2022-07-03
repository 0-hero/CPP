#include "/Users/ram/stdc++.h"
using namespace std;

// Basic pointer test
void pointerTest() {
	int var = 20;
	
	// Declare pointer variable
	int *ptr;
	
	//Data type of ptr and var must be same
	ptr = &var;

	//Assign address of a variable to a pointer
	cout << "Value at ptr = " << ptr << "\n";
	cout << "Value at var = " << var <<"\n";
	cout << "Value at *ptr = " << *ptr << "\n";
}

// Helper functions for call_by_and_pass_by
// Pass-by-value
int square1(int n)
{
	// Address of n in square1() is not the same as n1 
	// in call_by_and_pass_by
	cout << "Address of n1 in square1(): " << &n << "\n";

	// Clone modified inside the function
	n *= n;
	return n;
}
// Pass-by-reference with Pointer Arguments
void square2(int *n)
{
	// Address of n in square2() is the same as n2 in 
	// call_by_and_pass_by
	cout << "Address of n2 in square2(): " << n <<"\n";

	// Explicit de-referencing to get the value pointed-to
	*n *= *n;
}
// Pass-by-reference with Reference Arguments
void square3(int &n)
{
	// Address of n in square3() is the same as n3 in main()
	cout << "Address of n3 in square3(): " << &n <<"\n";

	// Implicit de-referencing (without '*')
	n *= n;
}

void call_by_and_pass_by()
{
	// Call-by-value
	int n1=8;
	cout << "Address of n1 in call_by_and_pass_by: " << &n1 << "\n";
	cout << "Square of n1: " << square1(n1) << "\n";
	cout << "No change in n1: " << n1 << "\n";

	// Call-by-reference with pointer arguments
	int n2=8;
	cout << "Address of n2 in call_by_and_pass_by: " << &n2 << "\n";
	square2(&n2);
	cout << "Square of n2: " << n2 << "\n";
	cout << "Change  reflected in n2: " << n2 << "\n";
	
	// Call-by-reference with reference arguments
	int n3=8;
	cout << "Address of n3 in call_by_reference: " << &n3 << "\n";
	square3(n3);
	cout << "Square of n3: " << n3 << "\n";
	cout << "Change reflected in n3: " << n3 << "\n";
}

void array_name_as_pointers() {
	// Declaring an array
	int val[3] = {5, 10, 20};

	// Declare pointer variable
	int *ptr;

	// Assign the address of val[0] to ptr
	// We can use ptr=&val[0]; (both are same)
	ptr = val;
	cout << "Elements of the array are: ";
	cout << ptr[0] << " " << ptr[1] << " " << ptr[2] << "\n";	
}

void pointer_arithmetic_and_expressions() {
	// Declare an array
	int v[3] = {10, 100, 200};

	// Declare pointer variable
	int *ptr;

	//Assign the address of v[0] to ptr
	ptr = v;

	for (int i=0; i<3; i++) {
		cout << "Value at ptr = " << ptr << "\n";
		cout << "Value at *ptr = " << *ptr << "\n";

		// Increment pointer ptr by 1
		ptr++;
	}

}

int main() {
	pointerTest();
	call_by_and_pass_by();
	array_name_as_pointers();
	pointer_arithmetic_and_expressions();
}
