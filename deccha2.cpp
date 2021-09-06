#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long int t;
    cin>>t;
    for(;t--;)
    {
        long int a,b;
        cin>>a>>b;
        long long int oa=a%2==0?a/2:(a/2)+1,ea=a/2,ob=b%2==0?b/2:(b/2)+1,eb=b/2;
        cout<<oa*ob+ea*eb<<endl;
    }
}