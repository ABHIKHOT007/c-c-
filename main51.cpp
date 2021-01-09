#include<bits/stdc++.h>
using namespace std;

//trivial hash function for sorting (negative & positive numbers) 
void sortusinghash(int arr[], int n)
{
    int max=*std::max_element(arr,arr+n);
    int min=abs(*std::min_element(arr,arr+n));

    int hashpos[max+1]={0};
    int hashneg[min+1]={0};

    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            hashpos[arr[i]]++;
        }
        else{
            hashneg[arr[i]]++;
        }
    }

    for(int i=min;i>0;i--){
        if(hashneg[i]){
            for(int j=0;j<hashneg[i];j++){
                cout<<(-1)*i<<" ";
            }
        }
    }

    for(int i=0;i<=max;i++){
        if(hashpos[i]){
            for(int j=0;j<hashpos[i];j++){
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