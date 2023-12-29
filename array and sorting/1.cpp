#include<bitset>/stdc++.h>
using namespace std;
class Solution{
    public:
    
    int doUnion(int a[], int n, int b[], int m)  {
     unordered_map<int,int> mp;
     for(int i=0;i<n;i++){
         mp[a[i]]++;
     }
     for(int i=0;i<m;i++){
         mp[b[i]]++;
     }
    // for(int i=0;i<n;i++){
    //      mp[a[i]]++;
    //  }
     return mp.size();
    }
};