#include <bits/stdc++.h>
using namespace std;
#define N 1e5 + 7

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> res;
        for (int i = 1; i * i <= N; i++) {
            if (N % i == 0) {
                res.push_back(i);
                if (i != N / i) {
                    res.push_back(N / i);
                }
            }
        }
        return res;
    }
};