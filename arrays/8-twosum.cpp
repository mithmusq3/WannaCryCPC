#include<bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>&nums, int target){
    unordered_set<int>set;
    for(auto &x: nums){
        if(set.count(target-x)){
            cout<<"yes"<<endl;
            return true;
        }
        set.insert(x);
    }
    return false;
}

int main(){

    return 0;
}