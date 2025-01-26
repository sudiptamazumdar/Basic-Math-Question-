/*You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.
A prime number is a number which has no divisors except 1 and itself.*/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 0)
            return false;
        if (n == 1)
            return false;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};

int main()
{
    Solution s;
    bool ans = s.isPrime(9);
    cout << boolalpha;
    cout << ans;
}