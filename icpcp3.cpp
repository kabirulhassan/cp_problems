#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    for(;t--;)
    {
        int n,x,y,k,i,common=0;
        cin>>n>>x>>y>>k;
        int A[n];
        set <int> house;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
            house.insert(A[i]);
        }
        if(house.size()==n)
            cout<<n;
        else
        {
            for(auto i: house)
                if(i>=x&&i<=y)
                    common++;
            int uncommon = (y-x+1)-common;
            int r = house.size();
            r += k<uncommon?k:uncommon;
            if(r>n)
                r=n;
            cout<<r;
        }
        cout<<"\n";
    }
}