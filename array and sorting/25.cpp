//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    
    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        if (a.second != b.second) {
            return a.second > b.second;
        } else {
            return a.first < b.first;
        }
    }

    vector<int> sortByFreq(int arr[], int n) {
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        
        vector<pair<int, int>> freqVec(mp.begin(), mp.end());

        sort(freqVec.begin(), freqVec.end(), cmp);

        vector<int> ans;
        for (auto it : freqVec) {
            int num = it.first;
            int freq = it.second;
            while (freq--) {
                ans.push_back(num);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends