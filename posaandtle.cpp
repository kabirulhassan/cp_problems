#include <bits/stdc++.h>
using namespace std;
void display(int a[], int n,int* x) 
{ 
    int f=1,i;
    for(i=0;i<n-1;i++)
        if((a[i]&a[i+1])==0)
            f=0;
    if(f==1)
    {
        *x=1;
    for (i = 0; i < n; i++) { 
        cout << a[i] << "  ";
    } 
    cout << endl; 
    }
} 
int findPermutations(int a[], int n) 
{ 
    int f=0;
    sort(a, a + n); 
    do { 
        display(a, n,&f);
        if(f==1)
            break;
    } while (next_permutation(a, a + n));
    return f;
} 
int main() 
{
    int t;
    cin>>t;
    for(;t>0;t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        for(i=0;i<n;i++)
            a[i]=i+1;
        int f=findPermutations(a,n);
        if(f==0)
            cout<<-1<<endl;
    }
}