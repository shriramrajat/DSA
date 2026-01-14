#include <bits/stdc++.h>
using namespace std;

int main(){
      vector<int> prices={7,5,1,9,8,2,3};
      int mini=prices[0];
      int profit=0;
      int n=prices.size();
      for (int i=0;i<n;i++){
            int cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(prices[i],mini);
      }
      cout << "max profit will be "<<profit<<endl;
      return 0;
}