#include<bits/stdc++.h>
using namespace std;

int largestelement(vector<int> arr){
      int max=0;
      for(int i=0;i<arr.size();i++){
            if(max<=arr[i]){
                  max=arr[i];
            }else{
                  continue;
            }
      }
      return max;
}

int main(){
      vector<int> arr={2,5,6,9,8,10,1};
      int ans=largestelement(arr);
      cout<<ans<<endl;
      return 0;
}