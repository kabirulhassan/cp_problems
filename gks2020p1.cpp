#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    for(int xt=1;xt<=t;xt++)
    {
        string s,k="KICK",st="START";
        cin>>s;
        int l=s.length();
        int starts[l],kicks[l],start=0,kick=0,c=0,i,j,f=0,ss=0,sk=0;
        for(start=s.find(st,start);s.find(st,start)!=string::npos;start=s.find(st,start+1))
            starts[f++]=start;
        ss=f;
        f=0;
        for(kick=s.find(k,kick);s.find(k,kick)!=string::npos;kick=s.find(k,kick+1))
            kicks[f++]=kick;
        sk=f;
        for(i=0;i<sk;i++)
            for(j=0;j<ss;j++)
                if(starts[j]>kicks[i])
                    c++;
        // for(kick=s.find(k,kick);s.find(k,kick)!=string::npos;kick=s.find(k,kick+1))
        //     for(start=s.find(st,kick);s.find(st,start)!=string::npos;c++,start=s.find(st,start+1));
        cout<<"Case #"<<xt<<": "<<c<<endl;
    }
}