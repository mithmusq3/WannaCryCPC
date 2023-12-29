#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& matrix) {
    for(int i=0;i<matrix.size();i++){
        for(int j =i+1;j<matrix.size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}

int main(){
    return 0;
}