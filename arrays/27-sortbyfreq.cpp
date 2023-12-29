#include<bits/stdc++.h>
using namespace std;

vector<int> freq_sort(vector<int>&nums){
    unordered_map<int,int>mp;
    for(auto &x: nums) mp[x]++;
    sort(nums.begin(), nums.end(), [&mp](int a, int b){
        return mp[a]<mp[b];
    });
    return nums;
}