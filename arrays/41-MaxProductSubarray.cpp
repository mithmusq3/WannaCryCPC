#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int minProd = 1, maxProd = 1, res = nums[0];
    for(auto x: nums){
        if (x==0){
            minProd = 1, maxProd = 1, res = max(res,0);
            continue;
        }
        int val1 = min(maxProd*x,minProd*x);
        int val2 = max(maxProd*x,minProd*x);
        minProd = min(x,val1);
        maxProd = max(x,val2);
        res = max(res, maxProd);
    }
    return res;
}