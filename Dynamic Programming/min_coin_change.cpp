#include<iostream>
#include<climits>
using namespace std;


int minCoins(int n,int coins[],int T,int dp[]){
	//Base case
	if(n==0){
		return 0;
	}

	// Lookup case
	if (dp[n]!=0){
		return dp[n];
	}

	//Rec case
	int ans = INT_MAX;
	for (int i=0;i<T;i++) {
		if (n-coins[i]>=0) {
			int subprob = minCoins(n-coins[i],coins,T,dp);
			ans = min(ans,subprob+1);
		}		
	}
	dp[n] = ans;
	return dp[n];
}
int main(){
	int n=15;
	int coins[] = {1,7,10};
	int dp[100] = {0};
	int T = sizeof(coins)/sizeof(int);
	cout<<minCoins(n,coins,T,dp)<<endl;
	return 0;

}