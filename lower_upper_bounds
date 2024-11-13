/*          lower_bound & upper_bound
O(log N)
lower _bound = it will find the smallest index such that arr[int]>=n where n is target
eg: [3,5,8,15,19] n=5
    it will return 1 , if n=9 then it is 3
    if n=20 then it will return the hypothetical index i.e., 5 size of array
eg: [3,5,8,15,19,19,19] n=19
    it will return 4(first occurance because it the returns smallest index)
if the array is sorted we can apply binary search 
--> lb=lower_bound(arr.begin(),arr.end(),target)-arr.begin();
    lower_bound(arr.begin(),arr.end(),target)// it returns the iterator pointing to that index so we need to subtract begin() iterator to get index
 we can also write lower_bound(arr,arr+n,target)
 eg: it asked only from 2nd index to 6th index then we write like
 --> lower_bound(arr+2,arr+7,target)end value is taken upto arr+7 -1 so which is upto 6

slight change is if(a[mid]>target) in upper_bound
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin >> target;
    int low=0,high=n-1;
    int index=n;
    while(low<=high){
        int mid=(low+high)/2;
        //  cout<<mid<<" ";
        if(a[mid]>=target){
            // cout<<mid<<" ";
            if(index>mid){
            index=mid;
            // cout<<index<<" ";
            }
            high=mid-1;
            // cout<<endl;
        }
        else {
            low = mid+1;
        }
    }
    cout<<index<<endl;
}
