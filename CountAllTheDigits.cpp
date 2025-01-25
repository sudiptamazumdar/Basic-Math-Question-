/*You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself. */


#include <iostream>
using namespace std;
class Solution {
public:
    int countDigit(int n) {
    if (n == 0) return 1; // Special case for 0, which has 1 digit

    int digit = 0;
    //n = abs(n); // Handle negative numbers
    while (n > 0) {
        digit++;
        n = n / 10; // Reduce n by dividing by 10
    }
    return digit;
}

};
int main()
{
    Solution s;
    int ans = s.countDigit(43);
    cout << ans;
}