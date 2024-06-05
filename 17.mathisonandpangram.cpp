#include <bits/stdc++.h>
using namespace std;
int main() {
    int p;
    cin >> p;
    while(p--)
    {
    int n=26,i,a[n];
    for(i=0;i<n;i++)
    cin >> a[i];
    string s;
	cin >> s;
	int freq[26]={};
	for(i=0;i<s.size();i++)
	{
		freq[s[i]]++;
	}
	int sum=0;
	for(i=0;i<s.size();i++)
	{
		if(freq[s[i]]==0) 
		{
			
			sum+=a[i];
		}     
	}
	cout << sum << endl;
    }
	return 0;
}