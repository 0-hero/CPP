// 4 main types of pre-processors
// 1. Macros
// 2. File Inclusion
// 3. Conditional Compilation
// 4. Other Directives

#include <iostream>

using namespace std;

// Macro definition
#define LIMIT 5

void macro()
{
	for (int i=0; i < LIMIT; i++) {
		cout << i << " ";
	}
	cout << "\n";
}

// Macro with parameter
#define AREA(l, b) (l * b)

void macro_with_parameter()
{
	int l1 = 10, l2 = 5, area;

	area = AREA(l1, l2);

	cout << "Area of rectangle is: " << area << "\n";
}

// ifdef MACRO

void ifdef_macro()
{
	// Executes if macro exsists or doesn't execute
	#ifdef LIMIT
		cout << "Limit exsists" << "\n";
	#endif
}

void undef_macro()
{
	// Undef undefines the macro. Can be tested with ifdef
	#undef LIMIT
	#ifdef LIMIT
		cout << "Limit still exsists" << "\n";
	#endif
}

int main()
{
	macro();
	macro_with_parameter();
	ifdef_macro();
	undef_macro();	

	return 0;
}
