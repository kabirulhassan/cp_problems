#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    for(;t--;)
    {
        int n,k,i,suma=0,sumb=0,c=0,d,j;
        cin>>n>>k;
        int A[n],F[n]={0};
        for(i=0;i<n;i++)
            cin>>A[i];
        sort(A,A+n,greater<int>());
        for(i=0;i<n&&suma<k;i++)
        {
            d=k-suma;
            if(A[i]>d&&i!=n-1)
            {
                for(j=i+1;j<n-1;j++)
                    if(A[j]>=d&&A[j+1]<d)
                    {
                        suma+=A[j];
                        F[j]++;
                    }
                if(--j==n-1&&F[j-1]==0)
                    if(A[j]>=d)
                    {
                        suma+=A[j];
                        F[j]++;
                    }
                    else
                    {
                        suma+=A[i];
                        F[i]++;
                    }
            }
            else
            {
                suma+=A[i];
                F[i]++;
            }
        }
        for(i=0;i<n&&sumb<k;i++)
            if(F[i]==0&&sumb<k)
            {
                sumb+=A[i];
                F[i]++;
            }
        if(suma>=k&&sumb>=k)
            cout<<accumulate(F,F+n,0)<<endl;
        else
            cout<<"-1\n";
    }
}