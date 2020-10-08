//problem link : https://www.codechef.com/JUNE20B/problems/PRICECON
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(;t>0;t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		int i,loss=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>k)
				loss+=a[i]-k;
		}
		cout<<loss<<endl;
	}
	return 0;
}