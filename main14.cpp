#include<bits/stdc++.h>
using namespace std;
bool findsum(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3, int sum)
{
    unordered_set<int> s;
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }

    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            if(s.find(sum-arr2[i]-arr3[j])!=s.end()){
                return true;
            }
        }
    }
    return false;
} 
int main() 
{ 
	int arr1[] = { 1 , 2 , 3 , 4 , 5 }; 
	int arr2[] = { 2 , 3 , 6 , 1 , 2 }; 
	int arr3[] = { 3 , 2 , 4 , 5 , 6 }; 
	int sum = 9; 
	int n1 = sizeof(arr1) / sizeof(arr1[0]); 
	int n2 = sizeof(arr2) / sizeof(arr2[0]); 
	int n3 = sizeof(arr3) / sizeof(arr3[0]); 
	findsum(arr1, arr2, arr3, n1, n2, n3, sum)? 
	cout << "Yes" : cout << "No"; 

	return 0; 
} 
