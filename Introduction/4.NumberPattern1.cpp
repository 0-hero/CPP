/*
Sample Input 1:
4
Sample Output 1:
1
23
345
4567

Sample Input 2 :
3
Sample Output 2 :
1
23
345
*/

#include<iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	int i,k,j;
	int val=1;
	for(i=1; i<=N; i++){
		k=i;
		for(j=1; j<=i; j++, k++) {
			cout<<k;
		}
		cout<<endl;
	}
}
