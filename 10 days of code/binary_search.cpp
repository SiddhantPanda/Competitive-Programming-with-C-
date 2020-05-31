/*
Rahul had a sorted array of numbers from which he had to find a given number quickly. His friend by mistake rotated the array. Now Rahul doesn't have time to sort the elements again. Help him to quickly find the given number from the rotated array.

Hint - Think Binary Search!



Input Format
The first line contains N - the size of the array. the next N lines contain the numbers of the array.The next line contains the item to be searched.

Constraints
Output Format
Output the index of number in the array to be searched. Output -1 if the number is not found.

Sample Input
5
4
5
1
2
3
2
Sample Output
3
Explanation
The given rotated array is [4, 5, 1, 2, 3]. The element to be searched is 2 whose index is 3.
*/
#include<iostream>
using namespace std;

long long int a[1000000];
int search(long long int a[],long long int s,long long int e,long long int key)  {
    if(s>e) {
        return -1;
    }
    long long int mid=(s+e)/2;
//first we have to chek position of mid;
if(key==a[mid]) {
    return mid;
}
if(a[s]>=a[mid])  {
    //check key in sorted part
    if(key>=a[mid]  && key<=a[e])  {
        return search(a,mid+1,e,key); 
    }
       else {
           return search(a,s,mid-1,key);
       }  
  }
  
  if(a[s]<key && key<=a[mid]) {
      return search(a,s,mid-1,key);
  }
  return search(a,mid+1,e,key);
    
}
int main() {
   long long  int n;
    cin>>n;
    //int a[100000];
    for(int i=0;i<n;i++)  {
        cin>>a[i];
    }
    long long int key;
    cin>>key;
    //int s=0;
    //int e=n-1;
    cout<<search(a,0,n-1,key)<<endl;
	return 0;
}