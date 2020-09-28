#include <iostream>
#include<climits>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    int people=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {   int ch1,ch2;
        cin>>ch1>>ch2;
        people=(people-ch1)+ch2;
        ans=max(ans,people);
    }
cout<<ans;
    return 0;
}
