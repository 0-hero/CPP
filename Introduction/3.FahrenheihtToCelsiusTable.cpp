/*Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.*/

#include<iostream>

using namespace std;

int main() {
	int start, end, step;
	cin >> start;
	cin >> end;
	cin >> step;
	while(start <= end){
		cout<< start << "\t" << ((start - 32) * 5/9) << endl;
		start = start + step;
	}
}
