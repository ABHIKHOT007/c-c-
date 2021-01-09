#include<bits/stdc++.h>
using namespace std;

/*int maxdiff(int arr[], int n)
{
    int result=0;

    sort(arr,arr+n);

    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            result+=abs(arr[i]);
        }
        else{
            i++;
        }

        if(arr[n-2]!=arr[n-1]){
            result+=abs(arr[n-1]);
        }

    }

    return result;

}*/

int maxdiff(int arr[], int n)
{
    unordered_map<int,int> hashpositive;
    unordered_map<int,int> hashNegative;

    int subsetsum_1=0,subsetsum_2=0;

    for(int i=0;i<n-1;i++){
        if(arr[i]>0){
            hashpositive[arr[i]]++;
        }
    }

    for(int i=0;i<=n-1;i++){
        if(arr[i]>0 && hashpositive[arr[i]]==1){
            subsetsum_1+=arr[i];
        }
    }

    for(int i=0;i<n-1;i++){
        hashNegative[arr[i]]++;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]<0 && hashNegative[abs(arr[i])]==1){
            subsetsum_2+=arr[i];
        }
    }

    return abs(subsetsum_1 - subsetsum_2);

}

int main()
{
    int arr[]={ 4, 2, -3, 3, -2, -2, 8 };
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"maximum difference is:"<<maxdiff(arr,n);

    return 0;
}