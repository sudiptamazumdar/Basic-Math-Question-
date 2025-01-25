/* You are given an integer n. You need to return the number of odd digits present in the number.
The number will have no leading zeroes, except when the number is 0 itself. */

#include <iostream>
using namespace std;

class Solution {
public:
    int countOddDigit(int n) {
        int count = 0;
        while (n != 0)
        {
            int digit = n % 10;
            if (n % 2 != 0)
                count ++;
            n = n / 10;
        }
        return count;
    }
};

int main()
{
    Solution s;
    int ans = s.countOddDigit(1284);
    cout << ans;
}