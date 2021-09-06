#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    double d1,d2,v1,v2,p,d=0,df,pf,v;
    cin>>d1>>v1>>d2>>v2>>p;
    d=(d1<d2)?d1:d2;
    if(d1==d2)
        d+=ceil(p/(v1+v2));
    else
    {
        if(d==d1)
        {
            df=d2-d1;
            pf=df*v1;
            v=v1;
        }
        else
        {
            df=d1-d2;
            pf=df*v2;
            v=v2;
        }
        if(pf>=p)
            d+=ceil(p/v);
        else
            d+=(df+ceil((p-pf)/(v1+v2)));
    }
    cout<<(int)d-1<<endl;
}