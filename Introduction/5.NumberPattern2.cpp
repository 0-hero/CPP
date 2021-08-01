/*
Sample Input 1:
4
Sample Output 1:
. . . 1
. . 2 3
. 3 4 5
4 5 6 7

Sample Input 2:
5
Sample Output 2:
. . . . 1
. . . 2 3
. . 3 4 5
. 4 5 6 7
5 6 7 8 9
*/

#include <iostream>

using namespace std;

int main() {
	int n, i, j, val, k;
	cin >> n;
	i = 1;
	while(i<=n) {
		j = 1;
		k = n-i;
		while(k>0){
			cout<<" ";
			k = k-1;
		}
		val = i;
		while (j<=i){
			cout<<val;
			val = val+1;
			j = j+1;
		}
		cout<<endl;
		i=i+1;
	}
}
