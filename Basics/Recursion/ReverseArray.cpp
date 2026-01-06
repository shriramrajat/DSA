#include <iostream>
using namespace std;
void reverse(int arr[], int n){
      int p1=0,p2=n-1;

      while(p1<p2){
            swap(arr[p1],arr[p2]);
            p1++;
            p2--;
      }
}
int main(){
    int arr[]={1,2,3,4};
    reverse(arr,4);
    for(auto i:arr)
        cout<<i<<" ";
}