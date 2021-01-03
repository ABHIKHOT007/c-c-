#include<bits/stdc++.h>
using namespace std;

int longestsubseqence(int arr[], int n)
{
    unordered_map<int,int>hash;

    int dp[n];
    memset(dp,0,sizeof(dp));

    int maximum=INT_MIN;

    for(int i=0;i<n;i++){
        if(hash.find(arr[i]-1)!=hash.end()){
            int lastIndex=hash[arr[i]-1]-1;
            dp[i]=1+dp[lastIndex];
        }
        else{
            dp[i]=1;

            hash[arr[i]]=i+1;
            maximum=max(maximum,dp[i]);
        }
    }
    return maximum;
}
int main()
{
    int arr[]={3,10,3,3,11,4,5,6,7,8,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<longestsubseqence(arr,n);

    return 0;
}