#include <bits/stdc++.h>
using namespace std;

bool sum_er_basis(const pair<pair<int, int>, pair<int, int>> &a, const pair<pair<int, int>, pair<int, int>> &b)
{
    return a.second.first > b.second.first;
}

bool i_er_basis(const pair<pair<int, int>, pair<int, int>> &a, const pair<pair<int, int>, pair<int, int>> &b)
{
    return a.second.second < b.second.second;
}

    int main()
{
    long int t;
    cin>>t;
    for(;t--;)
    {
        vector<int> tv;
        int n,q,i,sum=0;
        cin>>n>>q;
        int U[n],T[n];
        for(i=0;i<n;i++)
            cin>>U[i];
        for(i=0;i<n;i++)
        {
            cin>>T[i];
            tv.push_back(T[i]);
        }

        // {u, v}, {sum, i} <== currenyt pair
        vector<pair<pair<int,int>,pair<int,int>>>v;
        for (i = 0; i < n; i++)
            v.push_back(make_pair(make_pair(U[i], T[i]), make_pair(U[i] + T[i], i)));

        sort(v.begin(),v.end(),sum_er_basis); // sum er basis
        // for(auto x:v)
        //     cout<<x.first.first<<" "<<x.second.first<<endl;
        
        // for(i=0;i<q;i++)
        //     if(v[i].first.first<v[i].second.first)
        //         v[i].first.first=v[i].second.first;
        // for(auto x:v)
        //     cout<<x.first.first<<" ";

        sort(v.begin(), v.end(), i_er_basis); // i er basis
        int k=n-1,ff=0,lf=0;
        int blacklist[n]={0};
        for(i=0;i<n/2;i++,k--)
        {
            int first=v[i].second.first;
            int last = v[k].second.first;
            if(first>=0)
                ff=1;
            if(last>=0)
                lf=1;
            if(first<0 && ff==0)
                blacklist[i]=-1;
            if(last<0 && lf==1)
                blacklist[k]=-1;
        }
        for(i=0;i<q;i++)
        {
            int max = *max_element(tv.begin(),tv.end());
            auto mf = find(tv.begin(),tv.end(),max);
           int mfp = mf-tv.begin();
           blacklist[mfp]=tv[mfp]; 
        }
        for(i=0;i<n;i++)
        {
            if(blacklist[i]==-1)
                U[i]=0;
            else
            {
                U[i]+=blacklist[i];
            }
        }
        // for(auto x:v)
        //     cout<<x.first.first<<" "<<x.second.first<<endl;
        cout<<accumulate(U,U+n,0)<<endl;
            
    }
}