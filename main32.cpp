#include<bits/stdc++.h>
using namespace std;

int longestsubarraysum(int arr[], int n)
{
    int max_len=1;

    for(int i=0;i<n-1;i++){
        set<int> s;

        s.insert(arr[i]);

        int mn=arr[i],mx=arr[i];

        for(int j=i+1;j<n;j++){
            if(s.find(arr[j])!=s.end()){
                break;
            }else{
                s.insert(arr[j]);
                mn=min(mn,arr[j]);
                mx=max(mx,arr[j]);
            }
            if(mx-mn==j-i){
                max_len=max(max_len,mx-mn+1);
            }
        }
    }
    return max_len;
}

int main()
{
    int arr[]= {10, 12, 12, 10, 10, 11, 10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"length of the longest contigous subarray is:"<<longestsubarraysum(arr,n)<<endl;
    return 0;

}