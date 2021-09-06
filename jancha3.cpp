#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    for(;t--;)
    {
        int m,n,i,suma=0,sumb=0,swap=0;
        cin>>n>>m;
        int A[n],B[m],r=n<m?n:m;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
            suma+=A[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>B[i];
            sumb+=B[i];
        }
        sort(A,A+n);
        sort(B,B+m,greater<int>());
        int diff=suma-sumb;
        for(i=0;i<r;i++,diff=suma-sumb)
        {
            if(diff>0)
                break;
            if(A[i]<B[i])
            {
                suma=suma-A[i]+B[i];
                sumb=sumb-B[i]+A[i];
            }
            else
                break;
            swap++;
        }
        if(diff<=0)
            swap=-1;
        cout<<swap<<endl;
    }
}