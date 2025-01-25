/* You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.
A palindrome number is a number which reads the same both left to right and right to left. */

#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        int r = 0;
        int temp = n;
        while (n != 0)
        {
           int digit = n % 10;
           r = r * 10  + digit;
           n = n / 10;
        }
        if ( r == temp)
            return true;
        return false;
    }
};

int main()
{
    Solution s;
    bool ans = s.isPalindrome(121);
    cout << boolalpha; //  the bool values are internally stored as 0 & 1 hence we enable boolalpha manipulator to get the output in textual forms of true or false
    cout << ans;
}