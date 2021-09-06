#include<bits/stdc++.h>
using namespace std;
constexpr int MAXN = (int)1e6;
int dp[MAXN+2],dp1[MAXN+2],next0[MAXN],next1[MAXN];
string churi(string s)
{
    int n=s.length(),last_pos=-1,i,j,len,curind;
    string ans="1";
    for(i=0;i<n;i++)
        if(s[i]=='0')
        {
            for(j=last_pos+1;j<=i;j++)
                next0[j]=i;
            last_pos=i;
        }
    for(i=last_pos+1;i<n;i++)
        next0[i]=n;
    if(next0[0]==n)
        return "0";
    last_pos=-1;
    for(i=0;i<n;i++)
        if(s[i]=='1')
        {
            for(j=last_pos+1;j<=i;j++)
                next1[j]=i;
            last_pos=i;
        }
    for(i=last_pos+1;i<n;i++)
        next1[i]=n;
    dp[n]=dp[n+1]=0;
    dp1[n]=dp1[n+1]=0;
    for(i=n-1;i>=0;i--)
    {
        dp[i]=dp[i+1];
        if(s[i]=='0'&&next1[i]<n)
            dp[i]=max(dp[i],dp[next1[i]+1]+1);
        if(s[i]=='1'&&next0[i]<n)
            dp[i]=max(dp[i],dp[next0[i]+1]+1);
        dp1[i]=dp1[i+1];
        if(next1[i]<n)
            dp1[i]=max(dp1[i],dp[next1[i]+1]+1);
    }
    len=dp1[0]+1;
    curind=next1[0]+1;
    for(i=1;i<len;i++)
    {
        if(curind>=n)
        {
            ans.push_back('0');
            continue;
        }
        if(next0[curind]>=n)
        {
            ans.push_back('0');
            curind=next0[curind]+1;
            continue;
        }
        if(dp[next0[curind]+1]<len-i-1)
        {
            ans.push_back('0');
            curind=next0[curind]+1;
        }
        else
        {
            ans.push_back('1');
            curind = next1[curind]+1;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    for(;t>0;t--)
    {
        string s;
        cin>>s;
        cout<<churi(s)<<endl;
    }    
}