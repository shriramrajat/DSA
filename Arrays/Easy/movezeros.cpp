#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums){
      int j = -1;
      int n = nums.size();
      for (int i = 0; i < n; i++){
            if (nums[i] == 0){
                  j = i;
                  break;
            }
      }
      if (j == -1)
            return;
      for (int i = j + 1; i < n; i++){
            if (nums[i] != 0){
                  swap(nums[i], nums[j]);
                  j++;
            }
      }
}

int main(){
      vector<int> arr={1,0,5,0,0,1,4,5,0,5,3};
      moveZeroes(arr);
      for (auto it:arr){
            cout<<it<<" ";
      }
      
}