#include <iostream>
using namespace std;
int main()
{
	int a[5],i,sum=0;
	for(i=0;i<5;i++)
	{
		cin >> a[i];
	}
	for(i=0;i<5;i++)
	{
		sum+=a[i];
	}
	cout << sum;
}
