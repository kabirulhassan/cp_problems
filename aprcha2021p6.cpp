#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	for(;t--;)
	{
        int i,j,k,s0=0,s1=0;
        string s,binary,min="1";
        cin>>s;
        size_t p1,p0,x = s.find("1");
        if(x!=string::npos)
            s=s.substr(x);
        else
        {
            cout<<"1\n";
            continue;
        }
        int n=s.length();
        int one[n],zero[n];
        for(i=n-1,j=0;i>=0;i--,j++)
        {
            if(s[i]=='0')
                s0++;
            else
                s1++;
            one[i]=s1;
            zero[i]=s0;
        }
        cout<<endl;
        for(i=0;i<n;i++)
            cout<<s[i]<<" ";
        cout<<endl;
        for(i=0;i<n;i++)
            cout<<one[i]<<" ";
        cout<<endl;
        for(i=0;i<n;i++)
            cout<<zero[i]<<" ";
        for(i=1;i<n;i++)
        {
            p1=s.substr(i).find("1");
            p0=s.substr(i).find("0");
            if(p0==string::npos)
                min+="0";
            if(p1==string::npos)
                min+="1";
            if(p1==string::npos||p0==string::npos)
                break;
            if(p1>p0)
            {
                
            }
        }
    }
}