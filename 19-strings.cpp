#include <iostream>
#include<string>
using namespace std;

int main()
{    
string s;
cin>>s;
int n=s.length();
for(int i=0;i<n;i++)
{
if(s[i]=='A' || s[i]=='a' || s[i]=='O' || s[i]=='o' || s[i]=='Y'|| s[i]=='y' || s[i]=='e' || s[i]=='E' || s[i]=='u' || s[i]=='U' || s[i]=='I' || s[i]=='i')
continue;
cout<<"."<<(char)tolower(s[i]);
}

    return 0;
}