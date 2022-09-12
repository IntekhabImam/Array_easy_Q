#include<bits/stdc++.h>
using namespace std;

	bool isSort(int arr[],int n){
		for(int i =0; i<n; i++){
			for(int j =i+1; j<n;j++){
				if(arr[i]>arr[j])
				return false;
			}
		}
		return true;
	}
int main(){

	int arr[]= {4,5,3,7,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	bool ans = isSort(arr,n);
	if(ans)cout<<"True";
	else cout<<"False";
  return 0;
	
}
