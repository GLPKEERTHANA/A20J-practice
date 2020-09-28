#include <iostream>
using namespace std;

int main()
{    
    long long n;
    cin>>n;
    long long p=n;
    long long count=0;
    while(p)
    {
        int d=p%10;
        if(d==4 || d==7) count++;
        p=p/10;
    }
    if(count==4 || count==7)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}
//Microsoft visual c++ 2010