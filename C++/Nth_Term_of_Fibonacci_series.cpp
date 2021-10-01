#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll dp[100007];
int main()
{
  memset(dp,0,sizeof(dp));
  cout<<"Enter the term you want to print from Fibonacci series\n";
  ll n;
  cin>>n;
  dp[1]=1;
  for(ll i=2;i<=n;i++)
  dp[i]=dp[i-1]+dp[i-2];
  cout<<"The desired result is:\n";
  cout<<dp[n]<<"\n";
  return 0;
}
