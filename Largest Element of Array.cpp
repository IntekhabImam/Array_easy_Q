#include<iostream>
using namespace std;
	int findLargestElement(int arr[],int n){
	int max = arr[0];
	for(int i =0; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
	}
int main(){
	int arr[]= {5,6,4,3,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int max = findLargestElement(arr,n);
	cout<<max;
	return 0;
}
