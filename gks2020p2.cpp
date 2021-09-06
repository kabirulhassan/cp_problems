#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    for(int xt=1;xt<=t;xt++)
    {
        int n;
        cin>>n;
        int A[n][n],i,j,s[2*n-1]={0},k=0,f,k1=0,n1=n-1,k2=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>A[i][j];
        for(f=0;f<2*n-1;f++,k1++)
        {
            if(k1==n1)
            {
                k++;
                k1=0;
                n1--;
            }
            for(i=k,j=k1;j<=n1;i++,j++)
            {
                s[f]+=A[i][j];
                cout<<A[i][j]<<" ";
            }
        }
        cout<<"Case #"<<xt<<": "<<*max_element(s,s+(2*n-1))<<endl;
    }
}