#include<bits/stdc++.h>
using namespace std;

void longest(int arr[], int n, int k)
{
    unordered_map<int,int>hash;

    int start=0,end=0,now=0,l=0;

    for(int i=0;i<n;i++){
        hash[arr[i]]++;

        if(hash[arr[i]]==1){
            now++;
        }

        while(now>k){
            hash[arr[i]]--;

            if(hash[arr[i]]==0){
                now--;
            }

            l++;
        }

        if(i-l+1>=end-start+1){
            end=i,start=l;
        }
    }

    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={ 6, 5, 1, 2, 3, 2, 1, 4, 5 }; 
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    longest(arr,n,k);
    return 0;
    
}