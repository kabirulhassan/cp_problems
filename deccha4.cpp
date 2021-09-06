#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long int t;
    cin>>t;
    for(;t--;)
    {
        int n,k,f,nk=0,pk=0;
        cin>>n>>k;  
        for(int i=1,f=n%2==0?-1:1;i<=n;i++,f*=-1)
        {   
            if(f==-1)
                nk++;
            if(f==1)
                pk++;
            if(nk<=(n-k)&&pk<=k)
                cout<<i*f;
            else
            {
                if(nk>=(n-k))
                    cout<<i;
                else
                    cout<<i*-1;
            }
            cout<<" ";
        }
        cout<<endl;
    }
}