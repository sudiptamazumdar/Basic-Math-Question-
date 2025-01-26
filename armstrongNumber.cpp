/*You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.*/

#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int count = 0;
        int temp = n;
        int temp1 = n;
        while (n != 0)
        {
            int digit = n % 10;
            count ++;
            n = n / 10;
        }
        int sum = 0;
        while (temp != 0)
        {
            int digit = temp % 10;
            sum = sum + pow(digit , count);
            temp = temp / 10;
        }
        if (sum == temp1)
            return true;
        return false;
    }
};

int main()
{
    Solution s;
    bool ans = s.isArmstrong(153);
    cout << boolalpha;
     cout << ans;
}