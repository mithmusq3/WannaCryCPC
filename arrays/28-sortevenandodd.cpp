#include<bits/stdc++.h>
using namespace std;
void sortZeroAndOne(vector<int>& nums) {
    int j =-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 0){
            swap(nums[i],nums[++j]);
        }
    }
}