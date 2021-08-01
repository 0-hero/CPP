/*Given a number N, print sum of all even numbers from 1 to N.*/

#include <iostream>

using namespace std;

int main() {
	int n,sum=0;
	cin>>n;
	while(n>0) {
		if(n%2==0){
			sum = sum+n;
		}
		n = n-1;
	}
	cout<<sum;
}
