#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long int t;
    cin>>t;
    for(;t>0;t--)
    {
        int n,i=0;
        cin>>n;
        int A[n];
        for(;i<n;i++)
            cin>>A[i];
        sort(A,A+n);
        int time=A[n-1];
        if(n>2)
            if(A[n-2]<A[n-1])
                if(n==3)
                    time+=(A[0]-(A[2]-A[1]));
                else
                    time+=A[0]>(A[1]-(A[3]-A[2]))?A[0]:A[1]-(A[3]-A[2]);
        else
            time+=A[n-3];
        cout<<time<<endl;
    }
}