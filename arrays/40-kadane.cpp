#include<bits/stdc++.h>
using namespace std;

 int maxSubArray(vector<int>& nums) {
    int sum = 0, maxsum = nums[0];
    for(auto x : nums){
        sum += x;
        maxsum = max(maxsum,sum);
        sum = max(sum,0);
    }
    return maxsum;
}

int main(){
    return 0;
}