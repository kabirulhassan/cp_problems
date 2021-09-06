#include <bits/stdc++.h>
using namespace std;
int subsequence(string s1,string s2)
{
    int i,j,m=s1.length(),n=s2.length();
    for(i=0,j=0;i<n&&j<m;i++)
        if(s1[j]==s2[i])
            j++;
    return (j==m);
}
int main()
{
    int t;
    cin>>t;
    for(;t--;)
    {
        string s;
        cin>>s;
        size_t one = s.find("1");
        if(one==string::npos)
        {
            cout<<"0\n";
            continue;
        }
        s=s.substr(one);
        cout<<s<<endl;
        for(int i=1;;i++)
        {
            string binary = bitset<8>(i).to_string();
            binary = binary.substr(binary.find("1"));
            cout<<binary<<endl;
            if(!subsequence(s,binary))
            {
                cout<<binary<<endl;
                break;
            }
        }
    }
}