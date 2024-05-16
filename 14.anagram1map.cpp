#include<iostream>
#include<map>
using namespace std;
int main()
{
	string s,h;
	int i,g=1;
	cin >> s >> h;
	map<char,int>m;
	for(i=0;i<s.size();i++)
	{
		m[s[i]]++;
	}
	for(i=0;i<h.size();i++)
	{
		m[h[i]]--;
	}
	for(auto i:m)
	{
		if (i.second != 0) {
			g = 0;
			break;
		}
	}
	if(g==1)cout << "YES";
	else cout << "NO";
}