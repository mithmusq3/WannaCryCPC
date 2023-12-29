#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&A){
    int maxLen=1;
    int start=0;
    int nextStart=0;
    int j =0, n = A.size();
    while (j < n-1)
    { 
        while (j<n-1 && A[j]<=A[j+1])
            j++;
        while (j<n-1 && A[j]>=A[j+1]){
            if (j<n-1 && A[j]>A[j+1])
                nextStart=j+1;
                 
            j++;
        }
        maxLen = max(maxLen,j-(start-1));
        start=nextStart;
    }
         
    return maxLen;
}