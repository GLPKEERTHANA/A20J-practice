#include <iostream>
#include<string>

using namespace std;

int main()
{   int n;
cin>>n;
    for(int i=0;i<n;i++){
    string s;
    cin>>s;
    string ans=s;
     if(s.length()>10)
     {  
         ans=s[0];
         ans=ans+to_string(s.length()-2)+s[s.length()-1];
     }
     else
     ans=s;

cout<<ans<<"\n";
    }


    return 0;
}
