#include<bits/stdc++.h>
using namespace std;

//o(n^2)

int smallestsubarray(int arr[], int n, int k)
{
   int l=0,r=n;

   for(int i=0;i<n;i++){
       int j;
       unordered_set<int> s;
       for(int j=i;j<n;j++){
           s.insert(arr[j]);
           if(s.size()==k){
               if((j-i)<(r-l)){
                   r=j;
                   l=i;
               }
               break;
           }
       }
       if(j==n){
           break;
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
    int arr[]={ 1, 1, 2, 2, 3, 3, 4, 5};

    int n=sizeof(arr)/sizeof(arr[0]);

    int k=3;

    cout<<"smallest subarray sum with k distinct numbers:"<<smallestsubarray(arr,n,k);

    return 0;
}