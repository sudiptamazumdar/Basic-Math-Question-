/*You are given an integer n. Return the value of n! or n factorial.
Factorial of a number is the product of all positive integers less than or equal to that number.*/

#include <iostream>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        if (n == 0)
            return 1;
        int fact = n * factorial(n - 1);
        return fact;
    }
};

int main()
{
    Solution s;
    int fact = s.factorial(7);
    cout << fact;
}