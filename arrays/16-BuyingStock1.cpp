#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr;
    int sell = INT_MIN, buy = INT_MAX;
    for(auto x: arr ){
        buy = min(buy,x);
        sell = max(sell, x-buy);
    }
    cout<<sell<<endl;
    return 0;
}