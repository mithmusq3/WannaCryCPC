#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>nums, int target){
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<vector<int>>res;
    for(int i=0;i<n;i++){
        int target = target-nums[i];
        int j = i+1, k = n-1;
        while(j<k){
            int ttl = nums[j] + nums[k];
            if (ttl > target){
                k--;
            }else if(ttl < target){
                j++;
            }else{
                res.push_back({nums[i],nums[j],nums[k]});
                int a = nums[j] , b = nums[k];
                while( j<n&& nums[j] == a){
                    j++;
                }
                while( k>=0&& nums[k] == b){
                    k--;
                }
            }
        }
        int c = nums[i];
        while(i<n && nums[i] == c){
            i++;
        }
        i--;
    }
    return res;
}

int main(){

}