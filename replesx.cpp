#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long int t;
    cin>>t;
    for(;t>0;t--)
    {
        long int n,x,p,k,i,pv,kv,xp,xp1,xp2,r=1;
        cin>>n>>x>>p>>k;
        long int A[n];
        for(i=0;i<n;i++)
            cin>>A[i];
        sort(A,A+n);
        if((p<k&&A[p-1]<x)||(p>k&&A[p-1]>x))
            r=-1;
        else if(A[p-1]==x)
            r=0;
        else
        {
            A[k-1]=x;
            sort(A,A+n);
            for(xp1=0;A[xp1]!=x;xp1++);
            for(xp2=n-1;A[xp2]!=x;xp2--);
            xp=labs(p-xp1)<labs(p-xp2)?xp1:xp2;
            if(A[p-1]!=x)
                r+=labs(xp-(p-1));
        }
        cout<<"xp1 = "<<xp1<<" xp2 = "<<xp2<<endl;
        cout<<r<<endl;
    }
}