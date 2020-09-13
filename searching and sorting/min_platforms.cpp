/*Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station so that no train waits.
Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times will not be same for a train, but we can have arrival time of one train equal to departure of the other.
In such cases, we need different platforms, i.e at any given instance of time, same platform can not be used for both departure of a train and arrival of another.

Example 1:

Input: N = 6 
arr[] = [0900  0940 0950  1100 1500 1800]
dep[] = [0910 1200 1120 1130 1900 2000]
Output: 3
Explanation: 
Minimum 3 platforms are required to 
safely arrive and depart all trains.
Example 2:

Input: N = 3
arr[] = [0900 1100 1235]
dep[] = [1000 1200 1240] 
Output: 1
Explanation: Only 1 platform is required to 
safely manage the arrival and departure 
of all trains. 
*/


#include<bits/stdc++.h>
using namespace std;

int findPlatform(int arr[],int dep[],int n)
{
	//sort arrival and departure
	sort(arr,arr+n); 
	sort(dep,dep+n);
	int i=1;//pointer for arr
	int j=0;//pointer for dep
	int max_p = 1; // max of all
	int curr_p = 1;//required currently 
	while(i<n && j<n)
	{
		if(arr[i] <= dep[j])
		{
			curr_p++;
			i++;
		}
		else{
			curr_p--;
			j++;
		}

		max_p = max(max_p,curr_p);	
	}
return max_p;
}

int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	int n;
	cin>>n;
	int* arr = new int[n];
	int* dep = new int[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
			for(int i=0;i<n;i++)
			cin>>dep[i];
	cout<<findPlatform(arr,dep,n);
	return 0;

}