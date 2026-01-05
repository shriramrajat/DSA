#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        if(n<0)return false;
        int original=n;
        int revnum=0;
        while(n>0){
            int ld=n%10;
            revnum=revnum*10+ld;
            n=n/10;
        }
        return original==revnum;
    }
};