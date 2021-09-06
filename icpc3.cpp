#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(;t--;)
    {
        int n,i,count=0;
        double sum=0,rs=0;
        cin>>n;
        int A[2*n];
        int Pair[2*n]={0};
        for(i=0;i<2*n;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
        rs=sum*1.0/n;
        for (int i = 0; i < 2*n; i++)
            for (int j = i + 1; j < 2*n; j++)
                if (A[i] + A[j] == rs)
                {
                    if(Pair[i]==0 && Pair[j]==0)
                    {
                        count++;
                        Pair[i]=Pair[j]=1;
                    }
                }
        if(count==n)
            cout<<"PERFECT\n";
        else
            cout<<"IMBALANCED\n";
    }
}