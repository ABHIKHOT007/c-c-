#include<bits/stdc++.h>
using namespace std;
/*both have time complexity of o(n^2)*/
/*bool subsetsum(int arr[], int n, int k)
{
    int curr_sum=arr[0];
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]+curr_sum==k){
                return true;
            }
        }
    }
    return false;
}*/

bool subsetsum(int arr[], int n, int k)
{
    unordered_map<int,int>hash;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(hash.find(k-arr[i]-arr[j])!=hash.end()){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[]={38,7,44,42,28,16,10,37,33,2,38,29,8,25};
    //int arr[]={1,5,1,0,6,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=7;
    subsetsum(arr,n,k)?cout<<"Yes":cout<<"No";
    return 0;
}