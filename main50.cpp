#include<bits/stdc++.h>
using namespace std;

//trivial hash function
//o(n^2)
void sortusinghash(int arr[], int n)
{
    int max=*std::max_element(arr,arr+n);

    int hash[max+1]={0};

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<=max;i++){
        if(hash[i]){
            for(int j=0;j<hash[i];j++){
                cout<<i<<" ";
            }
        }
    }
}

int main()
{
    int arr[]={ 9, 4, 3, 2, 5, 2, 1, 0, 4, 3, 5, 10, 15, 12, 18, 20, 19 };

    int n=sizeof(arr)/sizeof(arr[0]);

    sortusinghash(arr,n);

    return 0;
}