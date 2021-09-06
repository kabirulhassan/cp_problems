#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,xt;
    cin>>t;
    for(xt=1;xt<=t;xt++)
    {
        int n,k,i,c=0;
        string s;
        cin>>n>>k;
        cin>>s;
        for(i=0;i<n/2;i++)
            if(s[i]!=s[n-i-1])
                c++;
        cout<<"Case #"<<xt<<": "<<abs(k-c)<<endl;
    }
}