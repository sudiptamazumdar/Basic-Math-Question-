/*You are given an integer n. You need to check if the number is a perfect number or not. Return true if it is a perfect number, otherwise, return false.
A perfect number is a number whose proper divisors add up to the number itself.*/

#include <iostream>
using namespace std;

class Solution 
{
    public:
    bool isPerfect(int n)
    {
        if (n <= 0)
            return false;
        int sum = 0;
        for(int i = 1; i < n; i++)
        {
            if (n % i == 0)
                sum = sum + i;
        }
        if (n == sum)
            return true;
        return false;
    }
};

int main()
{
    Solution s;
    bool ans = s.isPerfect(6);
    cout << boolalpha;
    cout << ans;
}