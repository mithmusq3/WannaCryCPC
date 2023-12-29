#include<bits/stdc++.h>
using namespace std;

int getOccurences(vector<int>&arr){
    int res = 0;
    for(auto &x:arr)res ^=x;
    return res;
}