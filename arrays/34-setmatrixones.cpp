#include<bits/stdc++.h>
using namespace std;

void setOnes(vector<vector<int>>& matrix){
    bool setRow = false;
    bool setCol = false;
    int n = matrix.size(), m = matrix[0].size();
    for(int i=0;i<n;i++){
        if(matrix[i][0] == 1){
            setRow = true;
        }
    }

    for(int i=0;i<m;i++){
        if(matrix[0][i] == 1){
            setCol = true;
        }
    }   

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j] == 1){
                matrix[i][0] = 1;
                matrix[0][j] = 1;
            }
        }
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][0] == 1 || matrix[0][j] ==   1 ){
                matrix[i][j] = 1;
            }
        }
    }

    if(setRow){
        for(int i=0;i<n;i++){
            matrix[i][0] = 1;
        }
    }
    
    if(setCol){
        for(int i=0;i<m;i++){
            matrix[0][i] = 1;
        }
    }
}