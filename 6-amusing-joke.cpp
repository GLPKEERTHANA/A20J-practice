#include <iostream>
#include<string>
#include <bits/stdc++.h> 
using namespace std;

int main()
{    
    
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    vector<int> count(26,0);
    bool flag=false;
 
    for(int i=0;i<s1.length();i++) count[s1[i]-'A']++;
    for(int i=0;i<s2.length();i++) count[s2[i]-'A']++;
    for(int i=0;i<s3.length();i++) count[s3[i]-'A']--;
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {flag=true;
        break;}
    }
    if(flag==true)
    cout<<"NO\n";
    else
    cout<<"YES\n";

    return 0;
}
