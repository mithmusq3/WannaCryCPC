#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>arr, int i){
    int larg = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l<arr.size()&& arr[l] > arr[larg]) larg = l;
    if(r<arr.size()&& arr[r] > arr[larg]) larg = r;
    if(larg != i){
        swap(arr[i],arr[larg]);
        heapify(arr, larg);
    }
}

void heapSort(vector<int>arr){
    for(int i = arr.size()/2-1;i>=0;i--) heapify(arr,i);
    for(int i= arr.size()-1; i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,0);
    }
    
}