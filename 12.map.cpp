#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n=6,i;
	int arr[6]={1,1,7,7,6,7};
	map<int,int>m;
	for(i=0;i<n;i++)
	{
		m[arr[i]]++;
	}
	//traversing on a map
	for(auto i: m)
	{
		cout << i.first << " " << i.second << endl;
	}
}