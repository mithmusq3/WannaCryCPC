//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int>res;
        int z = 0;
        for(int i=0;i<nums.size();i++){
            z = z^nums[i];
        }
        
        int set_bit = z & ~(z-1);
        
        int x=0,y=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&set_bit){
                x = x^nums[i];
            }
            else{
                y = y^nums[i];
            }
        }
        res.push_back(x);
        res.push_back(y);
        sort(res.begin(),res.end());
        return res;
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends