/* 
Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the GCD of N1 and N2. Print the value returned.



Input Format
Two integers seperated by a new line.

Constraints
0 < N1 < 1000000000
0 < N2 < 1000000000

Output Format
Output a single integer which is the GCD of the given integers.

Sample Input
16 
24
Sample Output
8
Explanation
The largest number that divides both N1 and N2 is called the GCD of N1 and N2.
*/



#include<iostream> 
using namespace std;

int gcd(int u, int v)
{
    return (v != 0) ? gcd(v, u % v) : u;
}
 
int main(void)
{
    int num1, num2, result;
    //cout << "Enter two numbers to find GCD using Euclidean algorithm: ";
    cin >> num1 >> num2;
    result = gcd(num1, num2);
    if (gcd)
        cout << result << endl;
    else
        cout << "\nInvalid input!!!\n";
    return 0;
}