#include <iostream>
#include<string>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{    
int n,m;
cin>>n;
cin>>m;
vector<int> a(m,0);
for(int i=0;i<m;i++)
cin>>a[i];
sort(a.begin(),a.end());
int min1=INT_MAX;
int i=0,j=n-1;
while(i<m && j<m)
{
min1=min(min1,a[j]-a[i]);
i++;
j++;

}

	cout << min1 << endl;
    return 0;
}