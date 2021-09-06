#include <bits/stdc++.h>
using namespace std;
void swap(long int* x,long int* y)
{
    long int c=*x;
    *x=*y;
    *y=c;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long int t,n,k,x,y;
    cin>>t;
    for(;t--;)
    {
        long int n,k,x,y;
        cin>>n>>k>>x>>y;
        if(x==y)
        {
            cout<<n<<" "<<n<<endl;
            continue;
        }
        long int x1=x,y1=y,xs[5],ys[5],i,m=1,f=x<y?1:-1,t=n;
        xs[1]=n;
        ys[1]=(n-x1)+y1;
        ys[4]=0;
        xs[4]=(0-y1)+x1;
        xs[2]=ys[1];
        ys[2]=xs[1];
        xs[3]=ys[4];
        ys[3]=xs[4];
        if(y>x)
            for(i=1;i<=4;i++)
            {
                cout<<xs[i]<<" "<<ys[i]<<endl;
                swap(&xs[i],&ys[i]);
            }
        if(k>4)
            k=k-4*(k/4);
        if(k==0)
            k=4;
        cout<<xs[k]<<" "<<ys[k]<<endl;
    }
}