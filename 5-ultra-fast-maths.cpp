#include <iostream>
using namespace std;

int main()
{    
    string s1,s2,s3;
    cin>>s1>>s2;
    s3=s2;
    for(int i=0;i<s1.length();i++)
    { if(s1[i]!=s2[i])
    s3[i]='1';
    else
    s3[i]='0';
    }
    cout<<s3<<"\n";

    return 0;
}
