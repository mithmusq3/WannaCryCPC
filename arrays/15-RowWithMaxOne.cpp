#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4
int rowWithMax1s(bool mat[R][C])
{
    int j,max_row_index = 0;
    j = C - 1;
 
    for (int i = 0; i < R; i++) {
      bool flag=false;
        while (j >= 0 && mat[i][j] == 1) {
            j = j - 1; 
                       
          flag=true ;
          }
      if(flag){
            max_row_index = i;
        }
    }
      if(max_row_index==0&&mat[0][C-1]==0)
            return -1;
    return max_row_index;
}