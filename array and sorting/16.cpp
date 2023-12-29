//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            sort(arr,arr+n);
            int ans = INT_MAX;
            int r = n-1;
            int l = 0;
            while(l<r){
                int sum = arr[r]+arr[l];
                if(abs(sum)<abs(ans)){
                    ans = sum;
                }
                else{
                    if(abs(sum) == abs(ans)){
                        ans = max(sum,ans);
                    }
                }
                if(sum<0){
                    l++;
                }
                else{
                    r--;
                }
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends