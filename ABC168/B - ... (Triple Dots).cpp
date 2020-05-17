#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int k;
  string s;
  cin>>k>>s;
  int length=s.size();
  if(length<=k)
  {
  	cout<<s<<"\n";
  }
  else
  {
    for(int i=0;i<length;i++)
    {
      if(i<k)
      {
        cout<<s[i];
      }
      else
      {
      	i=length;
      }
    }
    cout<<"...\n";
  }
  
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
}
