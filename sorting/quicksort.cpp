#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>arr, int low, int high){
    int pivot = arr[high];
    int i = (low-1);
    for(int j=low;j<=high;j++){
        if(arr[j] < pivot){
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[++i],arr[high]);
    return arr[i];
}

void quicksort(vector<int>arr,int low, int high){
    if(low<high){
        int p = partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}

int main(){

    return 0;
}