#include <bits/stdc++.h>
using namespace std;

int main(){
      vector<int> nums = {1, 5, 3, -4, -6, -7};
      int n = nums.size();
      vector<int> arr(n);
      int pos = 0;
      int neg = 1;
      for (int i = 0; i < n; i++){
            if (nums[i] > 0){
                  arr[pos] = nums[i];
                  pos = pos + 2;
            }
            if (nums[i] < 0){
                  arr[neg] = nums[i];
                  neg = neg + 2;
            }
      }
}