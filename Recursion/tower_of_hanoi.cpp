#include<bits/stdc++.h>
using namespace std;

void hanoi(int rings,char from_rod, char to_rod,char aux_rod) // A from , B aux , C to
{
	if(rings==1)
	{
		cout<<"move disk 1 from rod "<<from_rod<<" to rod "<<to_rod<<endl;
		return;
	}
	hanoi(rings-1,from_rod,aux_rod,to_rod);
	cout<<"move disk "<<rings<<" from "<<from_rod<<" to "<<to_rod<<endl;
	hanoi(rings-1,aux_rod,to_rod,from_rod);
return;
}

int main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	int rings;
	cin>>rings;
	hanoi(rings,'A','C','B');
	return 0;
}