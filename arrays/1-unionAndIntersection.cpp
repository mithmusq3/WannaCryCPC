#include<bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int>arr1, vector<int>arr2, int n, int m){
    set<int>s;
    for(auto &x: arr1) s.insert(x);
    for(auto &x: arr2) s.insert(x);
    vector<int>vec(s.begin(),s.end());
    return vec;
}