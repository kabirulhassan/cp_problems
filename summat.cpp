#include <bits/stdc++.h>
using namespace std;
int main()
{
    int** A;
    int m,n,i,j;
    cin>>n>>m;
    A=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        *(A+i)=(int*)malloc(m*sizeof(int));
        for(j=0;j<m;j++)
            cin>>A[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
}