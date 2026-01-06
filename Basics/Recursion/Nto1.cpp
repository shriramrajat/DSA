#include<iostream>
using namespace std;

void printnum(int n){
       if(n==0)return;
       cout<<n<<" ";
       printnum(n-1);
}
int main(){
    int n;
    cin>>n;
    printnum(n);
    return 0;
}