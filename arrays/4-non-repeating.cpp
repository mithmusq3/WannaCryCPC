#include<bits/stdc++.h>
using namespace std;

void get2NonRepeatNos(vector<int>arr){
    int Xor = arr[0], n=arr.size(),set_bit_no = 0, x=0,y=0;
    for(int i=1;i<n;i++) Xor ^= arr[i];
    set_bit_no = Xor & ~(Xor-1);
    for(int i=0;i<n;i++){
        if(arr[i]&set_bit_no) x ^= arr[i];
        else y ^= arr[i];
    }
    cout<<x<<" "<<y;

}