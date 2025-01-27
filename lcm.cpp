/*You are given two integers n1 and n2. You need find the Lowest Common Multiple (LCM) of the two given numbers. Return the LCM of the two numbers.*/

#include <iostream>
using namespace std;

class Solution {
public:
    int findGCD(int n1,int n2) {
        while (n2 != 0) {
            int remainder = n1 % n2;
            n1 = n2;
            n2 = remainder;
        }
        return n1; 
    }

    int LCM(int n1, int n2) {
        int gcd = findGCD(n1, n2); 
        return (n1 * n2) / gcd;    
    }
};

   
int main()
{
    Solution s;
    int ans = s.LCM(4,8);
    cout << ans;
}