#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long int t;
    cin>>t;
    for(;t>0;t--)
    {
        long int n,k,s=0,i,x,f=-1;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            s+=x-k;
            if(s<0&&f==-1)
                f=i;
        }
        if(f==-1)
            f=i+(s/k); 
        cout<<f<<endl;
    }
}