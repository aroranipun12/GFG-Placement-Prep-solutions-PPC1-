/*Given a string S. The task is to print all permutations of a given string.

Input Format:
The first line of input contains an integer T, denoting the number of test cases. Each test case contains a single string S in capital letter.

Output Format:
For each test case, print all permutations of a given string S with single space and all permutations should be in lexicographically increasing order.

Your Task:
This is a function problem. You only need to complete the function permutation that takes S as parameter and prints the permutations in lexicographically increasing order. The newline is automatically added by driver code.

Constraints:
1 ≤ T ≤ 100
1 ≤ size of string ≤ 5

Expected Time Complexity: O(N * N!), N = length of string.
Expected Auxiliary Space: O(1)

Example:
Input:
2
ABC
ABSG

Output:
ABC ACB BAC BCA CAB CBA 
ABGS ABSG AGBS AGSB ASBG ASGB BAGS BASG BGAS BGSA BSAG BSGA GABS GASB GBAS GBSA GSAB GSBA SABG SAGB SBAG SBGA SGAB SGBA

Explanation:
Testcase 1: Given string ABC has permutations in 6 forms as ABC, ACB, BAC, BCA, CAB and CBA .
 */

#include<bits/stdc++.h>
using namespace std;

void print_permutations(string str,int l,int r)
{
	if(l==r)
	{
		cout<<str<<endl;
		return;
	}
	else{
		for(int i=l;i<=r;i++)
		{
			swap(str[l],str[i]); //l ko l ke aage valo ke sath swap krke recursion call krdo

			print_permutations(str,l+1,r); // aage call kro
		}
	}
return;
}
int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	int t;
	cin>>t;
		while(t--)
		{
			string str;
			cin>>str;
			cout<<endl;
			print_permutations(str,0,str.length()-1);
		}
	return 0;
}