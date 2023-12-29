//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > mat, int n, int m) 
    {
        vector<int> ans;
        int r = 0,c=0,di=0;
        vector<int> dr = {0,1,0,-1};
        vector<int> dc = {1,0,-1,0};
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<m*n;i++){
            ans.push_back(mat[r][c]);
            vis[r][c] = 1;
            int nr = r+dr[di];
            int nc = c+dc[di];
            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc]){
                r = nr;
                c = nc;
            }
            else{
                di = (di+1)%4;
                r = r+dr[di];
                c = c+dc[di];
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends