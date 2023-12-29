#include <bits/stdc++.h>
using namespace std;
 
void kLargest(vector<int>& v, int N, int K)
{
    priority_queue<int, vector<int>, greater<int> > pq;
 
    for (int i = 0; i < N; ++i) {
        pq.push(v[i]);
        if (pq.size() > K) {
            pq.pop();
        }
    }
 
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}