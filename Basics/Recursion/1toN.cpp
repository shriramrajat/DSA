#include <iostream>
using namespace std;

void printnums(int n){
      if (n==0)return;
      printnums(n-1);
      cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    printnums(n);
}