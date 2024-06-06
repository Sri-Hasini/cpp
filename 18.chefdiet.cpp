#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n;
	    cin>>k;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int rem=0;
	    bool flag=true;
	    int i=0;
	    for( ;i<n; i++){
	        if(arr[i]+rem<k){
	            flag=false;
	            break;
	        }
	        int f=(arr[i]+rem)-k;
	        rem=f;
	    }
	    
	    if(flag){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO "<<i+1<<endl;
	    }
	}
	return 0;
}
