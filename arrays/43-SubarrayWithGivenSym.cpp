#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>arr, int sum){
    unordered_map<int,int>map;
    int curr_sum = 0;
    map[0] = -1;
    for (int i = 0; i < arr.size(); i++) {
        curr_sum += arr[i];
        if (map.count(curr_sum - sum)) {
            cout<<"yes";
        }
        map[curr_sum] = i;
    }
}