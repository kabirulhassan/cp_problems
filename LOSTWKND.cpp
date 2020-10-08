//Problem link : https://www.codechef.com/problems/LOSTWKND
#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for(int xt=1;xt<=t;xt++)
    {
	int a[5],p,sum=0,i;
	for(i=0;i<5;i++)
	cin>>a[i];
	cin>>p;
	for(i=0;i<5;i++)
	sum+=a[i];
	sum*=p;
	if(sum<=120)
	cout<<"No\n";
	else
	cout<<"Yes\n";
    }
	return 0;
}