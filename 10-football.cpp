#include <iostream>
#include<climits>
using namespace std;

int main()
{    
    string s;
    cin>>s;
    int ans=0;
    int max1=0;
    for(int i=0;i<s.length();i++)
    { if(s[i]=='0') {ans=0;}
else ans++;
max1=max(max1,ans);
    }
     int ans1=0;
    int max2=0;
    for(int i=0;i<s.length();i++)
    { if(s[i]=='1') {ans1=0;}
else ans1++;
max2=max(max2,ans1);
    }
   if(max1>=7 || max2>=7)
   cout<<"YES\n";
   else
   cout<<"NO\n";
    //cout<<max1<<" "<<max2;
    


    return 0;
}