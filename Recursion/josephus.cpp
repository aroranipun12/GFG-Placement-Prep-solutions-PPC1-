#include<bits/stdc++.h>
using namespace std;

int josephus(int n,int k)
{
	if(n==1)
		return n;
	return (josephus(n-1,k) + k - 1) % n + 1 ;
}

int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	int n,k;
	cin>>n>>k;
	cout<<josephus(n,k);
	return 0;
}