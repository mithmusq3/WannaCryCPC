#include<bits/stdc++.h>
using namespace std;

int twoSumClosest(vector<int>nums){
    sort(nums.begin(), nums.end());
    int gap = INT_MAX;
    int res = -1;
    int l = 0, r = nums.size()-1;
    while(l<r){
        if(abs(nums[l] + nums[r]) < gap){
            gap =  abs(nums[l] + nums[r]);
        }else if( (nums[l] + nums[r]) > 0){
            r--;
        }else{
            l++;
        }
    }
}

int main(){
    return 0;
}