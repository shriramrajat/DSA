#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int k) {
      int n = arr.size();
      if (n == 0) return;
      k = k % n;
      reverse(arr.begin(), arr.begin() + k);
      reverse(arr.begin() + k, arr.end());
      reverse(arr.begin(), arr.end());
}

int main(){
      vector<int> arr={1,2,3,4,5,6,7};
      int k=2;
      rotate(arr,k);
      for(auto it:arr){
            cout<<it<<" ";
      }
      return 0;
}