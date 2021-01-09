#include<bits/stdc++.h>
using namespace std;

void smallestsubarray(int arr[], int n, int k)
{
    int l=0,r=n;
    int j=-1;
    map<int,int>hash;
    for(int i=0;i<n;i++){
        while(j<n)
        {
            j++;
            if(hash.size()<k){
                hash[arr[j]]++;
            }

            if(hash.size()==k&&((r-l)>=(j-i))){
                l=i;
                r=j;
            }
        }

        if(hash.size()<k){
            break;
        }

        while(hash.size()==k){
            if(hash[arr[i]]==1){
                hash.erase(arr[i]);
            }
            else{
                hash[arr[i]]--;
            }
            i++;

            if(hash.size()==k&&(r-l)>=(j-i)){
                l=i;
                r=j;
            }
        }
        if(hash[arr[i]]==1){
            hash.erase(arr[i]);
        }
        else{
            hash[arr[i]]--;
        }
        
    }

    if(l==0&&r==n){
        cout<<"Invalid length"<<endl;
    }
    else{
        cout<<l<<" "<<r<<endl;
    }
}



int main()
{
    int arr[]={1,1,2,2,3,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    smallestsubarray(arr,n,k);
    return 0;                                                                                                   
}