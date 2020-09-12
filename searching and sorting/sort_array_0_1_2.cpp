#include<bits/stdc++.h>
using namespace std;

void print_sorted(int a[], int n)
{
    int* hash = new int[3];
    hash[0]=0;hash[1]=0;hash[2]=0; // use hash for storing frequencies of 0, 1, 2
    for(int i=0;i<n;i++)
    {
    	if(a[i] == 0)
    		hash[0]++;
    	else if(a[i] == 1)
    		hash[1]++;
    	else
    		hash[2]++;
    }
    //printing 
    for(int i=0;i<n;i++)
    {
    	if(hash[0] > 0)
    	{
    		cout<<0;
    		hash[0]--;
    	}
    	else if(hash[1] > 0)
    	{
    		cout<<1;
    		hash[1]--;
    	}
    	else{
    		cout<<2;
    		hash[2]--;
    	}
    }
    cout<<endl;

}

int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ;
	int t;
	cin>>t;
		while(t--)
		{
			int size;
			cin>>size;
			int* arr = new int[size];
				for(int i=0;i<size;i++)
					cin>>arr[i];
			print_sorted(arr,size);
		} 
	return 0;

}