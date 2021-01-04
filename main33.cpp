#include<bits/stdc++.h>
using namespace std;


int subarraysum(int arr[], int n, int sum)
{
    int curr_sum=arr[0],start=0,i;

    for(int i=1;i<=n;i++){
        while(curr_sum>sum&&start<i-1){
            curr_sum=curr_sum-arr[start];
            start++;
        }
        if(curr_sum==sum){
            cout<<"sum found between indeexes"<<start<<" "<<"and"<<" "<<i-1<<endl;
            return 1;
        }
    }
      if(i<n){
            curr_sum=curr_sum+arr[i];
        }
        return 0;
}

int main()
{
    int arr[]={ 15, 2, 4, 8, 9, 5, 10, 23 }; 
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=23;
    subarraysum(arr,n,sum);
    return 0;
}