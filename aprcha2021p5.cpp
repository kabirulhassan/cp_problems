#include <bits/stdc++.h>
using namespace std;
long int findSumSubMatrix(long int** mat,long int** sum,long int k,long int n,long int m,long int max)
{
    long int M=n,N=m,c=0;
    long int total; 
    for (long int i = k - 1; i < M; i++)
    {
        for (long int j = k - 1; j < N; j++)
        {
            total = sum[i][j];
            if (i - k >= 0)
                total = total - sum[i - k][j];
            if (j - k >= 0)
                total = total - sum[i][j - k];
            if (i - k >= 0 && j - k >= 0)
                total = total + sum[i - k][j - k];
            if (total >= max)
                c++;
        }
    }
    return c;
}
int main()
{
	long int t;
	cin>>t;
	for(;t--;)
	{
        long int k,n,m,i,j,r,c,w=0,l;
        cin>>n>>m>>k;
        long int **A,**sum;
        l=n<m?n:m;
        A=(long int**)malloc(n*sizeof(long int*));
        sum=(long int**)malloc(n*sizeof(long int*));
        for(i=0;i<n;i++)
        {
            *(A+i)=(long int*)malloc(m*sizeof(long int));
            *(sum+i)=(long int*)malloc(m*sizeof(long int));
            for(j=0;j<m;j++)
            {
                cin>>A[i][j];
                if(A[i][j]>=k)
                    w++;
            }
        }
        sum[0][0] = A[0][0];
        for (j = 1; j < m; j++)
            sum[0][j] = A[0][j] + sum[0][j - 1];
        for (i = 1; i < n; i++)
            sum[i][0] = A[i][0] + sum[i - 1][0];
        for (i = 1; i < n; i++)
            for (j = 1; j < m; j++)
                sum[i][j] = A[i][j] + sum[i - 1][j] + sum[i][j - 1]- sum[i - 1][j - 1];
        for(i=2;i<=l;i++)
            w+=findSumSubMatrix(A,sum,i,n,m,i*i*k);
        cout<<w<<endl;
   }
}