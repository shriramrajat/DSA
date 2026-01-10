
#include<bits/stdc++.h>
using namespace std;


int linearSearch(vector<int> &nums, int target){
      for (int i = 0; i < nums.size(); i++){
            if (nums[i] == target){
                  return i + 1;
            }
      }
      return -1;
}
int main(){
      vector<int> arr={9,8,7,6,5,4,3,2,1};
      int k=1;
      int ans=linearSearch(arr,k);
      if(ans==-1){
            cout<<"Element not Found!";
      }else{
            cout<<"ELement found at "<<ans<<" place.";
      }
}