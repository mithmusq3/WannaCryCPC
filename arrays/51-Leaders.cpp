#include<bits/stdc++.h>
using namespace std;

void printLeader(vector<int>&A){
     int mx = -1;
    for (int i = A.size() - 1; i >= 0; --i)
       if(A[i] > mx){
        cout<<A[i];
        mx=A[i];
       }
}