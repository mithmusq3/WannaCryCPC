#include<bits/stdc++.h>
using namespace std;

vector<int> productExpectSelf(vector<int>&nums){
    int n = nums.size();
    vector<int>ans(n,1);
    for(int i=1;i<nums.size();i++){
        ans[i] = nums[i-1]*ans[i-1];
    }
    int curr = nums[n-1];
    for(int i = n-2;i>=0;i--){
        ans[i]*= curr;
        curr*= nums[i];   
    }
    return ans;
}