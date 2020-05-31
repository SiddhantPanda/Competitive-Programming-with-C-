/* 
PMO gives two random numbers a & b to the Prime Minister. PM Modi wants to visit all countries between a and b (inclusive) , However due to shortage of time he can't visit each and every country , So PM Modi decides to visit only those countries,for which country number has two divisors. So your task is to find number of countries Mr. Modi will visit.



Input Format
The first line contains N , no of test cases. The next N lines contain two integers a and b denoting the range of country numbers.

Constraints
a<=1000000 & b<=1000000.
N<=1000

Output Format
Output contains N lines each containing an answer for the test case.

Sample Input
2
1 10
11 20
Sample Output
4
4
Explanation
PM Modi chooses countries with numbers 2,3,5 and 7 for the first testcase.
For the second testcase , he chooses countries with numbers 11,13,17 and 19.
*/


#include<iostream>
using namespace std;
bool isPrime[10000000];

void get_prime(int a, int b) {
  int count_prime = 0;
  for (int i = a; i <= b; i++) {
    if (isPrime[i]) {
      count_prime++;
    }
  }
  cout << count_prime << endl;
  return;
}

void gen_primes(){
	for(unsigned i=3; i<=10000000; i+=2){
		isPrime[i]=true;
	}
	isPrime[0]=isPrime[1]=false;
	isPrime[2]=true;
	for(unsigned i=2;i*i<=10000000;i++){
		if(isPrime[i]){
			for(unsigned j=i;j*i<=10000000;j++){
				isPrime[i*j]=false;
			}				
		}
	}
}

int main() {
  int t;
  cin>>t;
  gen_primes();

  while (t--) {
    int a, b;
    cin>>a>>b;
    get_prime(a, b);
  }

  return 0;
}