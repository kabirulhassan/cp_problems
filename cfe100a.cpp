#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long int t;
    cin>>t;
    for(;t--;)
    {
        long int a,b,c;
        cin>>a>>b>>c;
        long int s=a+b+c;
        long int d=s/7;
        long int sm= c < (a < b ? a : b) ? c : ((a < b) ? a : b);  
        if(s-(((d)*7)-((d-1)*2))==2&&s>7&&sm-d>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}