#include<bits/stdc++.h>
using namespace std;


int subsetsum(int arr[], int n)
{
    int subsetsum_1=0,subsetsum_2=0;

    for(int i=0;i<n-1;i++){
        bool issingleoccurance=true;
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                issingleoccurance=false;
                arr[i]=arr[j]=0;
                break;
            }
        }
        if(issingleoccurance){
            if(arr[i]>0){
                subsetsum_1+=arr[i];
            }
            else{
                subsetsum_2+=arr[i];
            }
        }
    }
    return abs(subsetsum_1 - subsetsum_2);


}


int main()
{
    int arr[]={ 4, 2, -3, 3, -2, -2, 8 };

    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"subset sum is:"<<subsetsum(arr,n);

    return 0;
}