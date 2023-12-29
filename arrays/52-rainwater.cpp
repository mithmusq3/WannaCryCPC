#include<bits/stdc++.h>
using namespace std;

 int trap(vector<int>& height) {
    int lheight = INT_MIN, rheight = INT_MIN;
    int ans = 0, l =0, r= height.size()-1;
    while(l<r){
        if (height[l] < height[r]){
            lheight = max(height[l],lheight);
            ans += lheight - height[l++];
        }else{
            rheight = max(height[r],rheight);
            ans += rheight - height[r--];
        }
    }
    return ans;
}