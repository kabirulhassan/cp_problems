#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(;t--;)
	{
	    int n,k,i,c=0,f=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(f==0&&s[i]=='*')
                c++;
            else
            {
                if(c>=k)
                    break;
                else
                    c=0;
                f=0;
            }
        }
        if(c>=k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}
	return 0;
}