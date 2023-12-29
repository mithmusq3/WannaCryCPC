#include<bits/stdc++.h>
using namespace std;


 int findMaxLength(vector<int>& nums) {
    unordered_map<int,int>mp;
    int count =0;
    int res = 0;
    for(int i=0;i<nums.size();i++){
        count+= (nums[i]?1:-1);
        if(count ==0 ){
            res = max(res, i+1);
        }
        if(mp.find(count)!= mp.end()){
            res = max(res, i - mp[count]);
        }else{
            mp[count] = i;
        }
    }
    return res;
}