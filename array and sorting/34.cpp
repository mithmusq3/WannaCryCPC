//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> mat) 
    {
       int n = mat.size();
       int m = mat[0].size();
       vector<vector<int>> temp(n+m-1);
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               temp[i+j].push_back(mat[i][j]);
           }
       }
       vector<int>ans;
       for(int i=0;i<temp.size();i++){
           for(int j=0;j<temp[i].size();j++){
               ans.push_back(temp[i][j]);
           }
       }
       return ans;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends