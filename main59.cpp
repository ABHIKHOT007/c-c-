#include<bits/stdc++.h>
using namespace std;

int countofsubarraywithequalnoof0andone(int arr[], int n)
{
    map<int,int>hash;

    int sum=0;
    int count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }

        sum+=arr[i];

        if(sum==0){
            count++;
        }

        if(hash[sum]){
            count+=hash[sum];
        }
        if(hash[sum]==0){
            hash[sum]=1;
        }
        else{
            hash[sum]++;
        }
    }

    return count;
}

int main()
{
    int arr[]={1, 0, 0, 1, 0, 1, 1}; 
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<countofsubarraywithequalnoof0andone(arr,n);

    return 0;
}