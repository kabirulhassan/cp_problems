#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for(;t>0;t--)
    {
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        if(abs(x-y)==0)
            cout<<"YES\n";
        else if(k!=0)
        {
            if(abs(x-y)%k==0)
                cout<<"YES\n";
            else
            {
                int t=(x+k)%n;
                while(t!=x)
                {
                    if(t==y)
                    {
                        cout<<"YES\n";
                        break;
                    }
                    t=(t+k)%n;
                }
                if(t==x)
                    cout<<"NO\n";
            }    
        }
        else
            cout<<"NO\n";
    }
}