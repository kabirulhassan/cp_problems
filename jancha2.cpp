#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    for(;t--;)
    {
        long int n,i=0;
        cin>>n;
        string s,a="abcdefghijklmnop";
        cin>>s;
        for(;i+4<=n;i+=4)
            cout<<a[stoi(s.substr(i,4),0,2)];
        cout<<endl;
    }
}