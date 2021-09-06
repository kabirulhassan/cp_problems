    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int t;
        cin>>t;
        for(;t--;)
        {
            long int n,k,i;
            cin>>n>>k;
            int A[n];
            map<int, int> counter;
            for(i=0;i<n;i++)
            {
                cin>>A[i];
                auto num = counter.find(A[i]);
                if(num !=counter.end())
                    num->second++;
                else
                    counter.insert(pair<int,int>(A[i],1));
            }
            long long int st = counter.size();
            i=0;
            long long int mon[st];
            for(auto itr=counter.begin();itr!=counter.end();itr++,i++)
                mon[i]=itr->second;
            sort(mon, mon + st, greater<int>());
            for(i=0;n>=0;i++)
            {
                if(mon[i]>k)
                    n-=mon[i];
                else
                    n-=k;
                if(n<=0)
                    break;
            }
            i++;
            cout<<i<<endl;
        }
    }