#include<bits/stdc++.h>
using namespace std;

int longestincreasingsequences(int arr[], int n)
{
    unordered_map<int,int>hash;

    int LIS_SIZE=1;
    int LIS_INDEX=0;
    int start=0;

    hash[arr[0]]=1;

    for(int i=1;i<n;i++){
        hash[arr[i]]=hash[arr[i]-1]+1;
        if(LIS_SIZE<hash[arr[i]]){
            LIS_SIZE=hash[arr[i]];
            LIS_INDEX=arr[i];
        }
    }
    cout<<"longest increasing sequences size is:"<<LIS_SIZE<<endl;

    cout<<"longest increasing sequences is:"<<endl;
    start=LIS_INDEX-LIS_SIZE+1;
    while(start<=LIS_INDEX){
        cout<<start<<" ";
        start++;
    }
}
int main()
{
    int arr[]={2,5,3,7,8,5,13,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<longestincreasingsequences(arr,n)<<endl;
    return 0;
}