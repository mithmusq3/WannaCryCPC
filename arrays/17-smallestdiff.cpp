#include<bits/stdc++.h>
using namespace std;

int findMinDiff(vector<int>arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int diff = INT_MAX;
    for (int i = 0; i < n - 1; i++)
        if (arr[i + 1] - arr[i] < diff)
            diff = arr[i + 1] - arr[i];
 
    // Return min diff
    return diff;
}

int main(){
    return 0;
}