#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	cout << "Size of char: " << sizeof(char)  << endl;
	cout << "char min val: " << CHAR_MIN  << endl;
	cout << "char max val: " << CHAR_MAX << endl;
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;
	cout << "Size of long int: " << sizeof(long int) << endl;
	cout << "Size of signed long int: " << sizeof(signed long int) << endl;
	cout << "Size of unsigned long int: " << sizeof(unsigned long int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;
	cout << "Size of double: " << sizeof(double) <<endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}	
