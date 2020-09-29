#include <iostream>
#include<climits>
#include<queue>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    priority_queue<int> q;
    int sum=0;
    for(int i=0;i<n;i++)
    { int ch;
    cin>>ch;
    sum+=ch;
    q.push(ch);
    }
    int count=0;
    int ursum=0;
    while(!q.empty() && ursum<=sum )
{   //cout<<"hi";
    ursum+=q.top();
    sum=sum-q.top();
    q.pop();
    count++;

}
cout<<count<<"\n";



    return 0;
}