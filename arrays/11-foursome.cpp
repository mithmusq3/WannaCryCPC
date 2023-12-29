#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        long long n = nums.size();
        vector<vector<int>> res;
        if(nums.empty()){
            return res;
        }
        for(long long i=0;i<n;i++){
            long long countOne = target - nums[i];
            for(long long j=i+1;j<n;j++){
                long long k = j+1;
                long long l = n-1;
                long long tar = countOne - nums[j];
                while(k<l){
                    if(nums[k] + nums[l] == tar){
                        vector<int>quads(4,0);
                        quads[0]=nums[i];
                        quads[1]=nums[j];
                        quads[2]=nums[k];
                        quads[3]=nums[l];
                        res.push_back(quads);
                        while(k<l && nums[k] == quads[2])k++;
                        while(k<l && nums[l] == quads[3])l--;
                    }else if(nums[k] + nums[l] > tar){
                        l--;
                    }else{
                        k++;
                    }
                }
                while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
            }
            while(i+1<nums.size() && nums[i+1] == nums[i]) i++;
        }
        return res;
    }