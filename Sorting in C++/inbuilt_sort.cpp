#include<iostream>
#include<algorithm>
using namespace std;

//define a comparator func.
bool compare(int a,int b){
	cout<<"Comparing "<< a <<" and "<< b <<endl;
	return a > b;
}

int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//in-built sort
	sort(a,a+n,compare);

	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	return 0;
}