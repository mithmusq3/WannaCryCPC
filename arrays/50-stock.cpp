#include<bits/stdc++.h>
using namespace std;

 int maxProfit(vector<int>& prices) {
    int sell = INT_MIN;
    int buy = INT_MAX;
    for (auto x: prices){
        buy = min(buy,x);
        sell = max(sell,x-buy);
    }
    return sell;
}