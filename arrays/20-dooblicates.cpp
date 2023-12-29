#include<bits/stdc++.h>
using namespace std;

void duplicates(vector<int>arr){
    unordered_set<int>st;
    for(auto x: arr){
        if(st.count(x)){
            cout<<x<<endl;
        }
        st.insert(x);
    }
}

int main(){
    return 0;
}