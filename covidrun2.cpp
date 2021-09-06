#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for(;t>0;t--)
    {
        int n,k,x,y,i,f=0;
        cin>>n>>k>>x>>y;
        for(i=x;;i=(i+k)%n)
        {
            if(i==y)
            {
                cout<<"YES\n";
                break;
            }
            if(i==x&&f++!=0)
            {
                cout<<"NO\n";
                break;
            }
        }
    }
}