#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long int t;
    cin>>t;
    for(;t--;)
    {
        long int n,k,d,i,sum=0,t;
        cin>>n>>k>>d;
        for(i=0;i<n;i++)
        {
            cin>>t;
            sum+=t;
        }
        t=sum/k;
        long int r=(t<d)?t:d;
        cout<<r<<endl;
    }
}