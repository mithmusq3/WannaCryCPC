//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        int left[]= new int[n];
        int right[]= new int[n];
        int tp=0;
        left[0]=arr[0];
        for(int i=1;i<n;i++){
            left[i]=Math.max(arr[i],left[i-1]);
        }
        right[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=Math.max(arr[i],right[i+1]);
        }
        for(int i=0;i<n;i++){
            int water=Math.min(left[i],right[i]);
            tp=tp+water-arr[i];
        }
        return tp;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends