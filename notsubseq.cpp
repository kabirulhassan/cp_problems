#include <bits/stdc++.h>
using namespace std;
unordered_set<string> sn;
void subsequences(char s[], char op[], int i, int j)
{
	if (s[i] == '\0')
	{
		op[j] = '\0';
		sn.insert(op);
		return;
	}
	else
	{
		op[j] = s[i];
		subsequences(s, op, i + 1, j + 1);
		subsequences(s, op, i + 1, j);
		return;
	}
}
string generateBinary(string s)
{
    queue<string> q; 
    q.push("1");
    while(69)
    {
        string s1 = q.front();
        q.pop();
		int t=sn.size();
        sn.insert(s1);
		if(sn.size()>t)
            return s1;
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}
int main()
{
	int t;
	cin>>t;
	for(;t--;)
	{
		string s;
		cin>>s;
		if(s.find("0")==string::npos)
		{
			cout<<"0\n";
			continue;
		}
		char str[s.length()];
		strcpy(str,s.c_str());
		int m = sizeof(str) / sizeof(char);
		int n = pow(2, m) + 1;
		char op[n];
		subsequences(str, op, 0, 0);
		cout<<generateBinary(s)<<endl;
		sn.clear();
	}
	return 0;
}