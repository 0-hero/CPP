#include <iostream>
#include <array>
using namespace std;

int binarySearch(int arr[], int x, int l, int h)
{
	while (l<=h) {
		int mid = (l+h)/2;
		if (arr[mid]==x) {
			return mid;
		}
		if (arr[mid] > x) {
			h = mid-1;
		}
		else {
			l = mid+1; 
		}
	}

	return -1;
}

int main() 
{
	int arr[] = {2,3,4,6,7,20,30};
	int x = 7;
	int l = 0;
	int h = sizeof(arr)/sizeof(arr[0])-1;
	int result = binarySearch(arr,x,l,h);
	cout<<result;
}
