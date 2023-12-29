#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int swappableIndex(vector<int>&nums, int pivot){
        for(int i= nums.size()-1;i>=0;i--){
            if(nums[i] > pivot){
                return i;
            }
        }
        return -1;
    }
    int LISuffix(vector<int>&nums){
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i] > nums[i-1]) return i;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int a = LISuffix(nums);
        int prev = a - 1;
        if (prev != -1){
            int pivot = nums[prev];
            int nextElem = swappableIndex(nums,pivot);
            swap(nums[prev],nums[nextElem]);
        }
        reverse(nums.begin()+a,nums.end());
    }
};