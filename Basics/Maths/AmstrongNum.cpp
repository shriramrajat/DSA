#include<bits/stdc++.h>
using namespace std;
#define ll long long


class Solution {
public:
    bool isArmstrong(int n) {
        int k=to_string(abs(n)).length();
        int sum=0;
        int temp=n;
        while(n>0){
            int ld=n%10;
            sum+=pow(ld,k);
            n/=10;
        }
        return temp==sum;
    }
};