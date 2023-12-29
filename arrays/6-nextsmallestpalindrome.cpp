#include<bits/stdc++.h>
using namespace std;

bool AreAllNine(vector<int>&num){
    for(auto &x: num){
        if(x!=9) return false;
    }
    return true;
}

void util(vector<int>&num){
    int n = num.size();
    int mid = n/2;
    bool leftsmaller = false;
    int i = mid -1;
    int j = (n % 2) ? mid + 1 : mid;
    while (i >= 0 && num[i] == num[j])
        i--, j++;
    if (i < 0 || num[i] < num[j])
        leftsmaller = true;
    while (i >= 0)
    {
        num[j++] = num[i--];
    }
    if(leftsmaller){
        int carry = 1, i = mid-1;
        if(n%2){
            num[mid] += carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        }else{
            j  = mid;
        }
        while (i >= 0)
        {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--]; 
        }
    }
    
}

void generateNextPalindrome(vector<int>&num){
    cout<<"Next palindrome is: ";
    if(AreAllNine(num)){
        cout<<1<<" ";
        for(int i=1;i<num.size();i++) cout <<"0 ";
        cout<<1<<endl;
    }else{
        util(num);
        for(auto &x: num)cout<<x<<" ";
    }
}

int main(){
    vector<int> num = {9,4,1,8,7,9,8,3,2,2};
    generateNextPalindrome(num);
    return 0;
}