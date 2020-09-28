#include <iostream>

using namespace std;

int main()
{    
   string s1,s2;
   cin>>s1;
   cin>>s2;
   bool flag=false;
   for(int i=0;i<(int)s1.length();i++)
   {   
   if(tolower(s1[i]) > tolower(s2[i]) )
   {
       cout<<"1";
        flag=true;
        break;
    }

else if(tolower(s1[i])<tolower(s2[i]))
   {
       cout<<"-1";
       flag=true;
       break;
    }
   }
   if(flag==false)
   cout<<"0";

}
//Microsoft visual c++ 2010