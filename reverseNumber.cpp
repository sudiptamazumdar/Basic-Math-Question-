/* You are given an integer n. Return the integer formed by placing the digits of n in reverse order. */

#include <iostream>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int r = 0;
        while (n != 0)
        {
            int digit = n % 10;
            r = r * 10 + digit;
            n = n / 10;
        }return r;
    }
};

int main()
{
    Solution s;
    int ans = s.reverseNumber(457);
    cout << ans;
}