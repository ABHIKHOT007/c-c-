#include<bits/stdc++.h>
using namespace std;

bool subarraysumzero(int arr[], int n)
{
    int curr_sum=0,i;
    while(n){
        curr_sum=arr[i];
        for(int j=0;j<n;j++){
            if(curr_sum-arr[j]==0){
                return true;
            }
        }
    }
    return false;
}

/*bool subarraysumzero(int arr[], int n)
{
    unordered_set<int> s;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0||s.find(sum)!=s.end()){
            return true;
        }
        else{
            s.insert(sum);
        }
    }
    return false;
}*/

int main()
{
    //int arr[]={-3, 2, 3, 1, 6};
    int arr[]={4, 2, 0, 1, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    subarraysumzero(arr,n)?cout<<"True":cout<<"False";
}