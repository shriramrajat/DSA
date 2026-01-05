#include <iostream>
using namespace std;
#include<math.h>

class Solution {
public:
    bool isPrime(int n) {
        int cnt = 0;
        for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;  // If n is divisible by i, increment the counter

            // If n is not a perfect square, count its reciprocal factor
            if (n / i != i) {
                cnt++;
            }
        }
    }

    // If the number of factors is exactly 2 (1 and the number itself), it's prime
    if (cnt == 2) {
        return true;
    } else {
        return false;  // If not, it's not a prime number
    }
    }
};