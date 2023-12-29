#include<bits/stdc++.h>
using namespace std;

int pythagoras(vector<int>nums){
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size();i++){
        int rhs = nums[i]*nums[i];
        int l = i+1, r = nums.size()-1;
        while(l<r){
            int lhs = nums[l]*nums[l] + nums[r]*nums[r];
            if(lhs > rhs ){
                r--;
            }else if(lhs < rhs){
                l++;
            }else{
                l++,r--;
                cout<<nums[i]<<" "<<nums[l]<<" "<<nums[r];
            }
        }
    }
}

int main(){
    return 0;
}