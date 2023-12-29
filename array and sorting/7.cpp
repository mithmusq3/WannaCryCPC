class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            int j=i-1;
            while(j>=0 && nums[j]>=nums[i]){
                j--;
            }
            if(nums[j]<nums[i]){
            swap(nums[j],nums[i]);
            return;
            }
        }
    }
};