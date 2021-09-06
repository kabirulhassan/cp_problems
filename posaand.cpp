#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for(;t>0;t--)
    {
        int n;
        cin>>n;
        if(ceil(log2(n))==floor(log2(n))&&n!=1)
            cout<<-1;
        else if(n==1)
            cout<<1;
        else
        {
            cout<<"2 3 1 ";
            for(int i=4,j=5;i<=n;i++,j++)
            {
                if(ceil(log2(i))==floor(log2(i)))
                    cout<<j++<<" "<<i++<<" ";
                else
                    cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}