#include<bits/stdc++.h>
using namespace std;

void print_permutations(string s,int len,string output,int p)
{
	if(p == len)
	{
		cout<<output<<" ";
		return;
	}
	for(int i=0;i<len;i++)
	{
		output.push_back(s[i]);
		print_permutations(s,len-1,output,p+1);
	}
}
int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	int t;
	cin>>t;
		while(t--)
		{
			string s;
			string output("");
			cin>>s;
			print_permutations(s,s.length(),output,0);
		}
	return 0;
}