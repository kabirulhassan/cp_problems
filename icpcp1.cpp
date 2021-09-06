#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    for(;t--;)
    {
        long int w,l,m,x,y;
        cin>>w>>l>>m>>x>>y;
        if(m-y>=w&& m-x>=w)
            cout<<"JUMP\n";
        else
            cout<<"FALL\n";
    }
}