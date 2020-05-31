#include<iostream>
using namespace std;

//define a comparator func.
bool compare(int a,int b){
	cout<<"Comparing "<< a <<" and "<< b <<endl;
	return a > b; //sorted in increasing order
}

void bubble(int a[],int n, bool (&cmp)(int a,int b)){
	//n-1 iterations
	for (int itr=1;itr<=n-1;itr++) {
		//pairwise swapping
		for (int j=0;j<=(n-itr-1);j++) {
			if (cmp(a[j],a[j+1])) {
				swap(a[j],a[j+1]);
			}
		}
	}
}

int main(){
	int n;
	cin>>n;

	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//in-built sort
	bubble(a,n,compare);

	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	return 0;
}