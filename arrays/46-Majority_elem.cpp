#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    int elem = -1, count =0;
    for(int i=0;i<nums.size();i++){
        if(elem == -1 || elem != nums[i]){
            count--;
            if (count < 0){
                elem = nums[i];
                count = 1;
            }
        }else{
            count++;
        }
    }
    return elem;
}