#include<iostream>
using namespace std;

void selection(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min = i;
		for(int j=0;j<n-1;j++){
			if(a[i]<a[min]){
				min = j;
			}
		}
		swap(a[i],a[min]);
	}
}
int main()
{
	int a[1000],n,key;
	cout<<"\n Enter the size: \n";
	cin>>n;
	cout<<"\n Enter the elements";
	for(int i=0;i<n;i++){
		cin<<a[i]<<endl;
	}
	selection(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
