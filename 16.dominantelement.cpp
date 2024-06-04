#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int p;
    cin >> p;
    while(p--)
    {
        int n,i;
        cin >> n;
        int a[n];
        map<int,int>m;
        for(i=0;i<n;i++) {
            cin >> a[i];
        }
        int mx=0;
        for(i=0;i<n;i++) {
            m[a[i]]++;
        }
        int g=0;
        for(auto i:m)
        {
            mx = max(i.second,mx);
        }
        for(auto i:m)
        {
            if(mx == i.second)
            g++;
        }
        if(g==1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}