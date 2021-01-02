#include<bits/stdc++.h>
using namespace std;

int countdivisiablepair(int arr[], int n)
{
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]%arr[j]==0||arr[j]%arr[i]==0){
                res++;
            }
        }
    }
    return res;
}

int main()
{
    int arr[]={1,2,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countdivisiablepair(arr,n);
    return 0;
}