#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,z,xa,ya,r;
        cin>>x>>y>>z;
        xa=z-x;
        ya=z-y;
        r=xa>ya?xa:ya;
        cout<<r<<endl;
    }
}