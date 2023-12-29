#include<bits/stdc++.h>
using namespace std;

void leftrightsumqual(vector<int>ans){
    int sum = 0;
    for (auto &x: ans) sum+=x;
    int rsum = 0;
    for(auto &x: ans){
        sum -=x;
        if(rsum == sum) cout<<"partition found"<<endl;
        rsum +=x;
    }
}
int main(){
    return 0; 
}