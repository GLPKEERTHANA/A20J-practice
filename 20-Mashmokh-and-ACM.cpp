#include <iostream>
#include<string>
#include<map>
#include<cmath>
#include <unordered_map> 
#include <unordered_set> 
#include<vector>
using namespace std;
int f(vector<vector<int> > &dp,int n,int k,unordered_map<int,unordered_set<int>> &m)
{   int mod=1000000007;
    if( k==1) return 1;
    if(dp[n][k]!=-1) return dp[n][k];
    int ans=0;
    for(auto x: m[n])
    {
        ans=(ans%mod+f(dp,x,k-1,m)%mod)%mod;
    }
    dp[n][k]=ans;
    return ans;
}
int main()
{   int mod=1000000007;
    vector<vector<int> > dp( 2001 , vector<int> (2001, -1));
	int p,k;
	cin>>p;
	cin>>k;
	int n=2001;
	unordered_map<int,unordered_set<int>> m;
	for(int i=2;i<=n;i++)
	{  for(int j=1;j<=(int)sqrt(i);j++)
	{
		if(i%j==0) {m[i].insert(j);m[i].insert(i/j);}
	}
	}
    int ans=0;
    for(int i=1;i<=p;i++)
    {
        ans=(ans%mod+f(dp,i,k,m)%mod)%mod;
    }
    cout<<ans;
    return 0;
}