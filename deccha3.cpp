#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long int t;
    cin>>t;
    for(;t>0;t--)
    {
        double d,risk=0,norisk=0;
        int n,i;
        cin>>n>>d;
        int A[n];
        for(i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]>=80||A[i]<=9)
                risk++;
            else
                norisk++;
        }
        cout<<int(ceil(risk/d)+ceil(norisk/d))<<endl;
    }
}