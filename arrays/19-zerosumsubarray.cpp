#include<bits/stdc++.h>
using namespace std;

bool zerosum(vector<int>arr){
    unordered_map<int,int>mp;
    int sum = 0;
    for(int i =0;i<arr.size();i++){
        sum+=arr[i];
        if(mp.find(sum) != mp.end()){
            return true;
        }
        mp[sum] = i;
    }
    return false;
}