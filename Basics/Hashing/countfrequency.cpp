#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> countFrequencies(vector<int> &nums){
      map<int, int> mpp;
      for (int x : nums){
            mpp[x]++;
      }
      vector<vector<int>> result;
      for (auto &p : mpp){
            result.push_back({p.first, p.second});
      }
      return result;
}

int main(){
      vector<int> nums = {10, 20, 30, 40};
      auto res = countFrequencies(nums);
      cout << "Frequency of elements: \n";
      for(auto &x : res){
            cout << x[0] << ": " << x[1] << "\n";    
      }
      return 0;
}