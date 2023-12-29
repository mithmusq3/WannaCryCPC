#include<bits/stdc++.h>
using namespace std;

void printTwoOdd(vector<int>arr){
    int xor2 = arr[0], set_bit_no, n= arr.size()-2, x=0,y=0;
    for(int i=1;i<n;i++) xor2^=arr[i];
    set_bit_no = xor2 & ~(xor2-1);
    for(auto &i: arr){
        if(i&set_bit_no) x^=i;
        else y ^= i;
    }
}