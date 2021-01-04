#include<bits/stdc++.h>
using namespace std;

void subarraysum(int arr[], int n, int sum)
{
    unordered_map<int,int>hash;

    int curr_sum=0;

    for(int i=0;i<n;i++){
        curr_sum+=curr_sum+arr[i];

        if(curr_sum=sum){
            cout<<"sum found between indexes"<<0<<"&"<<i<<endl;
        }
        if(hash.find(curr_sum-sum)!=hash.end()){
            cout<<"sum found between indexes"<<hash[curr_sum-sum]<<"&"<<i<<endl;
        }
        hash[curr_sum]=i;
    }
}
int main()
{
    int arr[]={10,2,-      2,-20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=-10;
    subarraysum(arr,n,sum);
    return 0;
}