#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
    return a>b;
}

void maximizeelement(int arr1[], int arr2[], int n)
{
    int arr3[2*n],k=0;
    
    for(int i=0;i<n;i++){
        arr3[k++]=arr1[i];
    }

    for(int i=0;i<n;i++){
        arr3[k++]=arr2[i];
    }

    unordered_set<int> s;

    sort(Arr3,arr3+2*n,compare);

    int i=0;
    while(s.size()!=n){
        if(s.find(arr3[i])==s.end()){
            s.insert(arr3[i]);
        }

        i++;
    }

    k=0;
    for(int i=0;i<n;i++){
        if(s.find(arr2[i]) != s.end() ){
            arr3[k++]=arr2[i];
            s.erase(arr2[i]);
        }
    }

    for(int i=0;i<n;i++){
        if(s.find(arr1[i]) != s.end() ){
            arr3[k++]=arr1[i];
            s.erase(arr1[i]);
        }
    }

    for(int i=0;i<n;i++){
        arr2[i]=arr3[i];
    }

}

void printarray(int arr[], int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}


int main()
{
    int arr1[]={2, 4, 3};
    int arr2[]={5, 6, 1};

    int n=sizeof(arr1)/sizeof(arr1[0]);

    maximizeelement(arr1,arr2,n);

    printarray(arr1,n);

    return 0;
}