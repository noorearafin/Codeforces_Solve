#include<iostream>
#include<string>
using namespace std;
int main()
{
  int x,k,count=0;
  cin>>x>>k;
  int n[x];
  for(int i=0;i<x;i++)
  {
      cin>>n[i];
  }
  k=k-1;
  for(int i=0;i<x;i++)
  {
      if(n[i]>=n[k]&&n[k]>0)
      {
          count++;
      }

  }
  cout<<count;

}
