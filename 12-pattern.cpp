#include <iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    vector<int> v(2*n+1,0);
    int length=1;
    int start,end;
        start=n;
        end=n;
    for(int i=0;i<n+1;i++)
    {         
    int j=start,k=end;
    int p=0;
    for(int z=0;z<start;z++)
    cout<<"  ";
    int m=(end-start)/2;
    int q=0;
    for(int z=0;z<=m;z++,q++){
        if(i==0)
        cout<<q;
        else
    cout<<q<<" ";
    }
    q=m-1;
    for(int z=0;z<m;z++,q--){
    if(q==0)
    cout<<q;
    else
    cout<<q<<" ";
    }
    //for(int z=end;z<2*n+1;z++)
    //cout<<"  ";
    start-=1;
    end+=1;
    length+=2;
    cout<<"\n";
    }
    start+=2;
    end-=2;
    for(int i=0;i<n;i++)
    {         
    int p=0;
    for(int z=0;z<start;z++)
    cout<<"  ";
    int m=(end-start)/2;
    int q=0;
    for(int z=0;z<=m;z++,q++){
    if(i==n-1) cout<<q;
    else
    cout<<q<<" ";
    }
    q=m-1;
    for(int z=0;z<m;z++,q--){
    if(q==0)
    cout<<q;
    else
    cout<<q<<" ";
    
    }
    //for(int z=end;z<2*n+1;z++)
    //cout<<"  ";
    start+=1;
    end-=1;
    length+=2;
    cout<<"\n";
    }

    return 0;
}