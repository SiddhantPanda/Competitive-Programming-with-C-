#include<iostream>
#include<climits>
using namespace std;

//n->n/3,n->n/2,n->n-1


int minStepsBU(int n){
//Bottom Up approach
// iterate a linear array
	int dp[100] = {0};
	dp[1] = 0;
	for(int i=2;i<=n;i++){
		int op1,op2,op3;
		op1 = op2 = op3 = INT_MAX;
		if(n%3==0){
			op1 = dp[i/3];
		}
		if(n%2==0){
			op2 = dp[i/2];
		}
		op3 = dp[i-1];
		dp[i] = min(min(op1,op2),op3) + 1;
	}
	return dp[n];
}
int main(){

	int n;
	cin>>n;
	int dp[100] = {0};
	cout<<minStepsBU(n)<<endl;
	return 0;
}