#include <iostream>
#include<queue>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    priority_queue<pair<int,int>, vector<pair<int,int>>  , greater <pair<int,int>>> q; 
    for(int i=0;i<n;i++)
    {   int ch;
        cin>>ch;
        q.push(make_pair(ch,i+1));
    }
    while(!q.empty())
    {
      cout<<q.top().second<<" ";
      q.pop();

    }




    return 0;
}
//Microsoft visual c++ 2010