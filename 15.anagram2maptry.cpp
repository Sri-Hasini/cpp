#include<iostream>
#include<map>
using namespace std;
int main()
{
	string s,h;
	int i,g=0;
	cin >> s >> h;
	map<char,int>m;
	map<char,int>m1;
	for(i=0;i<s.size();i++)
	{
		m[s[i]]++;
	}
	for(i=0;i<h.size();i++)
	{
		m1[h[i]]++;
	}
	for(auto i:m)
	{
		for(auto j:m1)
		{
			if(i.first!=j.first) 
			{
				if(i.second==j.second)
				g=1;
				
				
			}
		}
	}
	if(g==1)cout << "YES";
	else cout << "NO";
}