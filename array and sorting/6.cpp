//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    void nextpali(string &a){
        int n = a.size(),carry = 0,i=0;
        for( i=0;i<=(n-1)/2;i++){
            if(a[n-i-1]>a[i]){
                carry = 1;
                a[n-i-1]=a[i];
            }
            else if(a[n-i-1]<a[i]){
                carry = 0;
                a[n-i-1]=a[i];
            }
        }
        i--;
        for(i;i>=0;i--){
            if(carry){
                carry = (a[i]-'0' + 1 )/10;
                a[i]=a[n-i-1]=((a[i]-'0' + 1)%10 + '0');
            }
        }
        return ;
    }
vector<int> generateNextPalindrome(int num[], int n) {

    string ans = "";
    vector<int> answer;
    int carry = 1;
    for(int i=n-1;i>=0;i--)
    {
        ans+=(num[i]+carry)%10 + '0';
        carry = (num[i]+carry)/10;
    }
    if(carry)ans+=carry+'0';
    reverse(ans.begin(),ans.end());
    nextpali(ans);
    for(int i=0;i<ans.size();i++)
    {
        answer.push_back(ans[i]-'0');
    }
    return answer;
}
 
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends