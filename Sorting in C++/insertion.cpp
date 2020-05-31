#include<iostream>
using namespace std;

void insertion(int arr[],int n){
	//n-1 iterations
	for(int i=1;i<=n-1;i++){
		int e = arr[i];
		int j=i-1;
		while(j>=0 and arr[j]>e){
			arr[j+1]=arr[j];
			j = j-1;
		}
		arr[j+1]=e;
	}
}
int main(){
	int n,key;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	insertion(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<",";
	}
	return 0;
}