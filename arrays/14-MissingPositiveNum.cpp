#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
        for(auto &x: nums){
            if(x<0){
                x=0;
            }
        }
        int n = nums.size();
        for(auto &x: nums){
            int val = abs(x);
            if( 1<= val && val <= n){
                if(nums[val-1] > 0){
                    nums[val-1]*=-1;
                }else if(nums[val-1] == 0){
                    nums[val-1] = -1*(n+1);
                }
            }
        }
         for(int i=1 ; i<=n;i++){
            if(nums[i-1] >=0){
                return i;
            }
        }
        return n+1;
    }