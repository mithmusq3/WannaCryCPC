//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to find length of longest bitonic
	// subarray
	int bitonic(vector<int> arr, int n) {
	   
	   
	    vector<int> inc(n, 0);
        vector<int> dec(n, 0);

        inc[0] = 1;
        dec[n-1] = 1;

        for(int i=1; i<n; i++){
            if(arr[i] >= arr[i-1]){
                inc[i] = inc[i-1] + 1;
            }
            else{
                inc[i] = 1;
            }
        }

        for(int i=n-2; i>=0; i--){
            if(arr[i] >= arr[i+1]){
                dec[i] = dec[i+1] + 1;
            }
            else{
                dec[i] = 1;
            }
        }

        int len = 0;
        for(int i=0; i<n; i++){
            len = max(len, inc[i] + dec[i] - 1);
        }

        return len;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.bitonic(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends