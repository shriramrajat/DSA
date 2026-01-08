#include <bits/stdc++.h>
using namespace std;
///Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.
///
class Solution{
public:
      int mostFrequentElement(vector<int> &nums){
            unordered_map<int, int> map;

            for (int i : nums)
            {
                  map[i]++;
            }

            int maxFreq = 0;
            int maxele = INT_MAX;

            for (auto &p : map){
                  int element = p.first;
                  int count = p.second;

                  if (count > maxFreq){
                        maxFreq = count;
                        maxele = element;
                  }
                  else if (count == maxFreq){
                        maxele = min(maxele, element);
                  }
            }
            return maxele;
      }
};

int main(){
      vector<int> arr{2, 3, 4, 5,2};
      Solution obj;
      cout << obj.mostFrequentElement(arr) << endl;
      return 0;
}