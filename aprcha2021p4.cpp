#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	for(;t--;)
	{
        long int n,p=0,b,t;
        cin>>n;
        b=n/4;
        t=n-(b*4);
        p=b*44;
        if(t==1)
            p+=20;
        if(t==2)
            p+=36;
        if(t==3)
            p+=51;
        if(n>=4)
            p+=4*(4-t);
        cout<<p<<endl;
    }
}