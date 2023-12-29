//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    double waterOverflow(int K, int R, int C) {
        double glass[R+1][R+1];
        memset(glass, 0.0, sizeof(glass));
        int i = 0, j = 0;
        glass[i][j] = K;
        for (i = 0; i < R; i++){
            for (j = 0; j <= i; j++){
                double excess = glass[i][j] - 1.0;
                if (excess > 0){
                    glass[i + 1][j] += excess / 2.0;
                    glass[i + 1][j + 1] += excess / 2.0;
                    glass[i][j] = 1.0;
                }
            }
        }
        return glass[R - 1][C - 1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int K,R,C;
        
        cin>>K>>R>>C;

        Solution ob;
        cout << fixed << setprecision(6)<< ob.waterOverflow(K,R,C) << endl;
    }
    return 0;
}
// } Driver Code Ends