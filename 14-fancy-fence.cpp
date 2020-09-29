#include <iostream>
#include<climits>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int angle;
        cin>>angle;
        int sides=360%(180-angle);
        if(sides==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        
    }



    return 0;
}