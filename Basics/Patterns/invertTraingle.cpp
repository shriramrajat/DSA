#include<bits/stdc++.h>
using namespace std;
#define N 10

class Solution {
public:
    void revtriangle(int n) {
            for (int i = 0; i < N; i++) {
            // Inner loop for columns
            // Number of stars decreases with each row
            for (int j = N; j > i; j--) {
                cout << "* ";
            }
            // Move to next line
            cout << endl;
        }

    }
};