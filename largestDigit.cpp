/* You are given an integer n. Return the largest digit present in the number.*/

#include <iostream>
using namespace std;

class Solution {
public:
    int largestDigit(int n) {
        int max = INT_MIN;
        if (n == 0)
            return 0;
        while(n != 0)
        {
            int digit = n % 10;
            if (digit > max)
                max = digit;
            n = n/ 10;
        }
        return max;

    }
};
int main()
{
    Solution s;
    int num = s.largestDigit(457);
    cout << num << endl;
}