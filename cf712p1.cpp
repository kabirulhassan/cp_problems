#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,xt;
    cin>>t;
    for(xt=1;xt<=t;xt++)
    {
        int i,f=1,c=0;
        string s,o="";
        cin>>s;
        int n=s.length();
        for(i=0;i<n;i++)
        {
            if(s[n-i-1]!='a' && f==1)
            {
                o+='a';
                f=0;
            }
            if(i>=n/2 && f==1)
            {
                f=-1;
                break;
            }
            o+=s[i];
            if(s[i]=='a')
                c++;
        }
        if(f==-1)
        {
            if(count(s.begin(),s.end(),'a')<n)
            {
                o=s;
                o+='a';
                f=1;
            }
        }
        if(f==-1)
            cout<<"NO\n";
        else
            cout<<"YES\n"<<o<<endl;
    }
}