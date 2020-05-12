#include <iostream>
using namespace std;
int main()
{
	long long int num, sum=0;
	cin>>num;
    int timearr[num];
	for(int i=0;i<num;i++)
	{
		cin>>timearr[i];
		sum+=timearr[i];
	}
	long int m;
	cin>>m;
	for(long long int i=1;i<=m;i++)
	{
		int p,x;
		cin>>p>>x;
		int val=sum-timearr[p-1]+x;
		cout<<val<<"\n";
	}
	
}
