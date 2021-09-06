#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    for(;t--;)
    {
        int i=1,r=0,n,x,k,b;
        long int f[15];
        cin>>n>>x;
        while(n>0)
        {
            if(x>=n)
            {
                n=0;
                r++;
                break;
            }
            k=(int)log2(n);
            if(k%2==0)
                k--;
            b = pow(2,k);
            n-=b;
            r++;
            if(b==0)
                break;
        }
        if(n==0)
            cout<<r<<endl;
        else
            cout<<"-1\n";
    }
}