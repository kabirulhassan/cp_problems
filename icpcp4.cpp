#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    for(;t--;)
    {
        int A[3];
        cin>>A[0]>>A[1]>>A[2];
        sort(A,A+3);
        if(A[1]*2==A[2]&&accumulate(A,A+3,0)%4==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}