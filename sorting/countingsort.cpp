#include<bits/stdc++.h>
using namespace std;

vector<int> countSort(vector<int>& arr){
    int n = arr.size(),m=0;
    for(int i=0;i<n;i++){
        m = max(m,arr[i]);
    }
    vector<int>arr2(m+1, 0);
    for(int i=0;i<n;i++){
        arr2[arr[i]]++;
    }
    for(int i=1;i<=m;i++){
        arr2[i] +=arr2[i-1];
    }
    vector<int>outArr;
    for(int i= n-1;i>=0;i--){
        outArr[arr2[arr[i]]-1] = arr[i];
        arr2[arr[i]]--;
    }
    return outArr;
}