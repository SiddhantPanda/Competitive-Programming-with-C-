#include<iostream>
using namespace std;
void bubble(int a[],int n){
	//n-1 iterations
	for(int itr=1;itr<=n-1;itr++){
		//pairwise swapping
		for(int j=0;j<=(n-itr-1);j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main(){
	int n,key;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubble(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	return 0;
}