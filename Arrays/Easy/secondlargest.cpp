#include <bits/stdc++.h>
using namespace std;
/// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

int secondlargest(vector<int> arr){
      int max = INT_MIN;
      int secondmax = INT_MIN;
      for (int i = 0; i < arr.size(); i++){
            if (arr[i] == max) continue;
            if (arr[i] > max){
                  secondmax = max;
                  max = arr[i];
            }else{
                  if (secondmax < arr[i] && arr[i] != max)
                        secondmax = arr[i];
            }
      }
}

int main(){
      vector<int> arr{1,2,3};
      cout << secondlargest(arr);
      return 0;
}