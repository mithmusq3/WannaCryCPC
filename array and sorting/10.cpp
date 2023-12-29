//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &arr, int s) {
       vector<vector<int>> ans;
       set<vector<int>>st;
       int n = arr.size();
       sort(arr.begin(),arr.end());
       for(int i=0;i<n-3;i++){
           for(int j=i+1;j<n-2;j++){
               int k = j+1;
               int l = n-1;
               while(k<l){
                   vector<int>temp;
                   int sum = arr[i]+arr[j]+arr[k]+arr[l];
                   if(sum == s){
                       temp.push_back(arr[i]);
                       temp.push_back(arr[j]);
                       temp.push_back(arr[k]);
                       temp.push_back(arr[l]);
                       if(st.find(temp) == st.end()){
                       st.insert(temp);
                       ans.push_back(temp);
                       }
                       k++;
                       l--;
                   }
                   else if(sum>s){
                       l--;
                   }
                   else{
                       k++;
                   }
               }
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
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends