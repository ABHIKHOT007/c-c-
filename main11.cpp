#include<bits/stdc++.h>
using namespace std;

bool subarraysum(int arr[], int n, int k)
{
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(((sum%k)+k)%k){
            count++;
        }
    }
    if(count>=1){
        return true;
    }
    else{
        return k;
    }
}
int main()
{
    int arr[]={3,7,1,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<subarraysum(arr,n,k);
    return 0;
}