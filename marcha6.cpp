#include <bits/stdc++.h>
using namespace  std;
int main()
{
    long int t;
    cin>>t;
    for(;t--;)
    {
        long int n,i,j;
        cin>>n;
        long int H[n],D[n];
        fill_n(D,n,1);
        for(i=0;i<n;i++)
            cin>>H[i];
        for(i=0;i<n-1;i++)
        {
            double min = ((H[i]-H[i+1])*1.0)/1.0;
            for(j=i+1;j<n;j++,D[i]++)
            {
                double a=((H[i]-H[j])*1.0)/((j-i)*1.0);
                if(a>min)
                    break;
                min = a;
            }
        }
        long int dis = *max_element(D,D+n);
        if(dis>1)
            dis--;
        cout<<dis<<endl;
    }
}