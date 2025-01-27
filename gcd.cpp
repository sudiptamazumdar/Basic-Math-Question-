/*You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.
The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.*/

#include <iostream>
using namespace std;

class Solution {
public:
    int GCD(int n1,int n2) {

        while (n2 != 0) {
            int remainder = n1 % n2;
            n1 = n2;
            n2 = remainder;
        }
        return n1; // The GCD is stored in n1
    }
};
   
int main()
{
    Solution s;
    int ans = s.GCD(4,8);
    cout << ans;
}