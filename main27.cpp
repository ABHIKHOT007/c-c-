#include<bits/stdc++.h>
using namespace std;

int countdistinct(int arr[], int k)
{
    int dist_count=0;

    for(int i=0;i<k;i++){
        int j;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(j==i){
            dist_count++;
        }
    }
    return dist_count;
}

void countDistinct(int arr[], int n, int k)
{
    for(int i=0;i<=n-k;i++){
        cout<<countdistinct(arr+i,k)<<endl;
    }
}

int main()
{
    int arr[]={1, 2, 1, 3, 4, 2, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    countDistinct(arr,n,k);
    return 0;
}