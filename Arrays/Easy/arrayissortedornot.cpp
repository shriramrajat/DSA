#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr, int n){
      if (n == 1 || n == 0)
            return true;
      for (int i = 1; i < n; i++){
            if (arr[i] < arr[i - 1])
                  return false;
      }
      return true;
}

int main(){
      vector<int> arr = {2, 4, 6};
      cout << isSorted(arr, arr.size());
      return 0;
}