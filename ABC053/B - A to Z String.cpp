#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int>valA;
	vector<int>valZ;
	int stringLength = s.size();
	for(int i=0;i<stringLength;i++)
	{
			if(s[i]=='A')
			{
				valA.push_back(i);
			}
			else if(s[i]=='Z')
			{
					valZ.push_back(i);
			}
	}
	sort(valA.begin(), valA.end());
	sort(valZ.begin(), valZ.end());
	//int sizeA = valA.size();
	int sizeB = valZ.size();
	cout<<valZ[sizeB-1]-valA[0]+1<<"\n";
}
