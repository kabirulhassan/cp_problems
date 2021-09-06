#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin >> t;
	while (t--)
    {
		bool flag = false;
        char c;
		string s;
		cin >> s;
        if(s.length()==2)
            if(s[0]=='M'&&s[1]=='U')
                flag = true;
        c=s[0];
		for (int i = 1; i < s.length(); i++)
        {
			if(c=='M'&&s[i]=='U')
                flag=true;  
            if(s[i]!='?')
                c=s[i];
		}
		if (flag)
            cout << "Yes" << endl;
		else
            cout << "No" << endl;
	}
	return 0;
}