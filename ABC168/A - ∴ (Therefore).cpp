#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int remain=t%10;
  if(remain==3)
  {
    cout<<"bon\n";
  }
  else if(remain==0||remain==1||remain==6||remain==8)
  {
    cout<<"pon\n";
  }
  else
  {
    cout<<"hon\n";
  }
}
