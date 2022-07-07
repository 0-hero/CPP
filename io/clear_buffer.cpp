// Testing uncleared buffer
#include <iostream>
#include <vector>
#include <ios>
#include <limits>

using namespace std;

void uncleared_buffer()
{
	int a;
	char ch[80];

	// Enter input  from user
	// - 4 for example
	cout << "Enter a integer : ";
	cin >> a;

	// Get input from user
	// "0-hero" for example
	cout << "Enter a string : ";
	cin.getline(ch, 80);

	// Prints 4
	cout << "Printing int : ";
	cout << a << endl;

	// Printing string: This does
	// not print string
	cout << "Printing string : ";
	cout << ch << endl;

}

void clear_buffer()
{
	int a;
	char str[80];

	// Enter input from user
	// -4 for example
	cout << "Enter a integer : ";
	cin >> a;

	// Discard the input buffer
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Get input from user -
	// "0-hero" for example
	cout << "Enter a string : ";
	cin.getline(str, 80);

	// Prints 4
	cout << "Printing int : ";
	cout << a << endl;

	// Printing string : This
	// will print string now
	cout << "Printing string : ";
	cout << str << endl;
}

void discard_buffer()
{
	int a;
	char str[80];

	// Enter input from user
	// 4 for example
	cout << "Enter a integer : ";
	cin >> a;

	// Discards the input buffer
	cin.sync();

	// Get input from user
	// 0-hero for example
	cout << "Enter a string : ";
	cin.getline(str, 80);

	// Prints 4
	cout << "Printing integer : ";
	cout << a << "\n";

	// Printing sttring 
	// this will print string
	cout << "Printing string : ";
	cout << str << "\n";
	
}

void ws_buffer()
{
	int a;
	string s;

	// Enter input from user
	// 4 for example
	cout << "Enter a integer : ";
	cin >> a;

	// Discard the input buffer and
	// initial white spaces of string
	cin >> ws;

	// Get input from user
	// "0-hero" from example
	cout << "Enter a string : ";
	getline(cin, s);

	// Printing 4 and 0-hero
	// will execute print a and s
	cout << "Printing integer : ";
	cout << a << "\n";
	cout << "Printing string : ";
	cout << s << "\n";
}


int main() 
{	
	cout << "Uncleared buffer example " << "\n";
	uncleared_buffer();
	
	cout << "\n";
	cout << "Clear buffer example " << "\n";
	clear_buffer();
	
	cout << "\n";
	cout << "Discard buffer example " << "\n";
	discard_buffer();
	
	cout << "\n";
	cout << "WS buffer example " << "\n";
	ws_buffer();	

	return 0;
}
