/*
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabe
*/

#include <iostream>

using namespace std;

int main() {
	char c;
	cin >> c;
	if(c>=65 && c<=122)
	       cout<<1;
	else if(c>=97 && c<=122)
		cout<<0;
	else cout << -1;	
}
