#include<bits/stdc++.h>
using namespace std;

vector<int>spiralMatrix(vector<vector<int>>&matrix){
    vector<int>res;
    int top = 0, bottom = matrix.size(),left = 0, right= matrix[0].size();
    while(top<bottom && left< right){
        for(int i = left; i<right;i++){
            res.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<bottom;i++){
            res.push_back(matrix[i][right-1]);
        }
        right--;
        if(!(top<bottom && left<right)){
            return res;
        }
        for(int i=right-1;i>=left;i--){
            res.push_back(matrix[bottom-1][i]);
        }
        bottom--;
        for(int i=bottom-1;i>=top;i--){
            res.push_back(matrix[i][left]);
        }
        left++;
    }
}
