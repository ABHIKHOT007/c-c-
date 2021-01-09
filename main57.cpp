#include<bits/stdc++.h>
using namespace std;

//o(n^2)

/*int sumofallpairs(int arr[], int n)
{
    int sum=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(abs(arr[j]-arr[i])>1){
               sum +=(arr[j]-arr[i]);
           }
           else if(abs(arr[j]-arr[i])<=1){
               sum +=0;
           }
        }
    }

    return sum;
}*/

//o(n)

int sumofallpairs(int arr[], int n)
{
    unordered_map<int,int>hash;

    int ans=0,pre_sum=0;
    for(int i=0;i<n;i++){
        ans+=(i*arr[i])-pre_sum;
        pre_sum+=arr[i];

        if(hash[arr[i]-1]){
            ans-=hash[arr[i]-1];
        }

        if(hash[arr[i]+1]){
            ans+=hash[arr[i]+1];
        }

        hash[arr[i]]++;
    }

    return ans;
}

int main()
{
    //int arr[]={6,6,4,4};
    int arr[]={1,2,3,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"sum of all pairs in array is:"<<sumofallpairs(arr,n)<<endl;
    return 0;
}