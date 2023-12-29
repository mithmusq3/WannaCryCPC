#include<bits/stdc++.h>
using namespace std;

void findThreeNumbers(vector<int>&nums){
  if (nums.size() < 3){ 
    cout << "No such triplet found"; 
    return; 
  } 
    
  // track best sequence length  
  // (not current sequence length) 
  int seq = 1;         
    
  // min number in array 
  int min_num = nums[0];   
    
  // least max number in best sequence  
  // i.e. track arr[j] (e.g. in  
  // array {1, 5, 3} our best sequence  
  // would be {1, 3} with arr[j] = 3) 
  int max_seq = INT_MAX;       
    
  // save arr[i] 
  int store_min = min_num;
  for (int i = 1; i < nums.size(); i++)  
  { 
    if (nums[i] == min_num) 
      continue; 
      
    else if (nums[i] < min_num)  
    { 
      min_num = nums[i]; 
      continue; 
    }  
      
    // this condition is only hit  
    // when current sequence size is 2 
    else if (nums[i] < max_seq) {     
        
      // update best sequence max number  
      // to a smaller value  
      // (i.e. we've found a  
      // smaller value for arr[j]) 
      max_seq = nums[i];        
        
      // store best sequence start value  
      // i.e. arr[i] 
      store_min = min_num;             
    }  
      
    // Increase best sequence lengt
    else if (nums[i] > max_seq)  
    { 
      // We've found our arr[k]! 
      // Print the output         
        cout << "Triplet: " << store_min <<  
                 ", " << max_seq << ", " <<  
                           nums[i] << endl; 
        return; 
    } 
  } 
    
  // No triplet found 
  cout << "No such triplet found"; 
}