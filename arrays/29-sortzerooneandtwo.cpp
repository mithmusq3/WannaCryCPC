#include<bits/stdc++.h>
using namespace std;

void sortZeroOneAndTwo(vector<int>& nums) {
    int j =-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 0){
            swap(nums[i],nums[++j]);
        }
    }
    for(int i=j+1;i<nums.size();i++){
        if(nums[i] == 1){
            swap(nums[i],nums[++j]);
        }
    }
}