#include <bits/stdc++.h>
using namespace std;

//To check whether the number is valid to perform 
bool isValid(int n){
    map <int,int> m;
    int r;
    while(n>0){
        r=n%10;
        m[r]++;
        n/=10;
    }
    for(auto i:m){
        if(i.second>2){
            return false;
        }
    }
    return true;
} 

//to check if the number has got equal to 6174
int isEqual(string s){
    if(s=="6174"){
        return -1;
    }
    return 0;
}

int main() {
    int n,cnt=0;
    // cout<<"Enter 4 digits number : ";
    cin >> n;
    int a[n];
    // cout<<n<<endl;
    // cout<<isValid(n)<<endl;
    string s=to_string(n);//to convert num to string
    // cout<<s;
    string h;
    if(isValid(n)){
        while(isEqual(s)!=-1){
            h=s;
            sort(s.begin(),s.end());
            sort(h.begin(),h.end(),greater<char>());
            // cout<<s<<" "<<h<<endl;
            int nums1=stoi(s);
            int nums2=stoi(h);
            int diff=abs(nums1-nums2);
            // cout<<diff<<endl;
            s=to_string(diff);
            cnt++;
        }
        cout<<"Number of times it will run : "<<cnt<<endl;
    }
    else cout<<"Invalid number";
}
