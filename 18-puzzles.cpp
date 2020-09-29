#include <iostream>
#include<string>
using namespace std;

int main()
{    
	int p,k;
	cin>>p;
	cin>>k;
	int n=2001;
	unordered_map<int,unordered_set<int>> m;
	for(int i=2;i<=n;i++)
	{  for(int j=1;j<=(int)sqrt(i);j++)
	{
		if(i%j==0) {m[i].insert(j);m.insert(i/j);}
	}
	}
	cout<<m[6];



    return 0;
}