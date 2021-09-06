    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int t;
        cin>>t;
        for(;t--;)
        {
            long int n,k,i,j=0;
            cin>>n>>k;
            int A[n],F[n]={0};
            for(i=0;i<n;i++)
                cin>>A[i];
            sort(A,A+n);
            F[0]=1;
            for(i=1;i<n;i++)
            {
                if(A[i]!=A[i-1])
                    j++;
                F[j]++;
            }
            sort(F,F+n,greater<int>());
            // for(i=0;i<n;i++)
            //     cout<<F[i]<<" ";
            // cout<<endl;
            for(i=0;n>0;i++)
            {
                if(F[i]>k)
                    n-=F[i];
                else
                    n-=k;
            }
            cout<<i<<endl;
        }
    }