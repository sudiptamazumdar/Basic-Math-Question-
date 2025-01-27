/*You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive). Return the number of prime numbers in the range.*/

#include <iostream>
using namespace std;

class Solution {
public:
    void primesInRange(int n) {
        for (int num = 2; num <= n; num++) {
            if (isPrime(num)) {
                cout << num << " ";
            }
        }
    }

    bool isPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main()
{
   Solution s;
   s.primesInRange(9); 
   return 0;
}

