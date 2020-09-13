/*You are given a number n. You need to find nth Fibonacci number.
F(n)=F(n-1)+F(n-2); where F(1)=1 and F(2)=1

Example 1:

Input:
n = 1
Output: 1
Explanation: The first fibonacci
 number is 1
Example 2:

Input:
n = 20
Output:6765
Explanation: The 20th fibonacci 
number is 6765
Your Task:
You don't need to read input or print anything. You only need to complete the function fibonacci that takes n as parameters and returns the n-th fibonacci number.

Expected Time Complexity: O(2n).
Expected Auxiliary Space: O(N).

Constraints:
1 <= n <= 20*/
#include<bits/stdc++.h>
using namespace std;
//use dynammic programming to reduce time complexity from O(2^n) to O(n)
long long fib(int n, long long* dp)
{
	if(n==1|| n==2)
		return 1;
	if(dp[n] != -1 )  //means we've already calculated it
	{
		return dp[n];
	}
	long long ans = fib(n-1,dp) + fib(n-2,dp);
	dp[n] =  ans;
	return ans;
}

int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	int n;
	cin>>n;
	long long* dp = new long long [n+1];
		for(int i=0;i<=n;i++)
			dp[i] = -1;
	cout<<fib(n,dp);
	return 0;
}