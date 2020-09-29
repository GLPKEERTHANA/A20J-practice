#include <iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
{    
  int k;
  cin>>k;
  string s;
  cin>>s;
  vector<int> v(26,0);
  int max1=INT_MIN;
  for(int i=0;i<s.length();i++)
   {
        v[s[i]-'a']++;
   }
   bool flag=false;
   string ans="";
  for(int i=0;i<26;i++)
   {   if(v[i]==0) continue;
   if(v[i]%k!=0) {flag=true; break;}
   char p=(char)(97+i);
    for(int j=0;j<v[i]/k;j++)
    ans=ans+p;
   }
   string res="";
   for(int i=0;i<k;i++)
   res=res+ans;
   if(flag==false) cout<<res;
   else
   cout<<"-1\n";
    return 0;
}