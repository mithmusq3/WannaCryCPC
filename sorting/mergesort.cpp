#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>arr, int left, int right, int mid){
    int m = mid - left +1;
    int n = right - mid;
    vector<int>leftArray(m), rightArray(n);
    for(int i=0;i<m;i++){
        leftArray[i] = arr[left+1];
    }
    for(int i=0;i<n;i++){
        rightArray[i] = arr[mid+1+i];
    }
    auto i = 0, j = 0 , k=0;
    while(i<m && j<n){
        if(leftArray[i]<= rightArray[j]){
            arr[k++] = leftArray[i++];
        }else{
            arr[k++] = rightArray[j++];
        }
    }

    while(i<m){
        arr[k++] = leftArray[i++];
    }

    while(j<n){
        arr[k++] = rightArray[j++];
    }

}