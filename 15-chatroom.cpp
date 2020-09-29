#include <iostream>
#include<climits>
using namespace std;

int main()
{    
    string s;
    cin>>s;
    bool flag=false;
    string s1="hello";
    int i=0,j=0;
    int n=s.length();
    while(i<n && j<5)
    {
        if(s[i]==s1[j])
        {i++;j++;}
        else
        i++;
        if(j==5)
       { flag=true; break;}

    }
    if(flag==true)
    cout<<"YES";
    else
    cout<<"NO";




    return 0;
}