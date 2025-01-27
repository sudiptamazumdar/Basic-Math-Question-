/*You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
A number which completely divides another number is called it's divisor.*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector <int> v;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                v.push_back(i);
        }
        return v;
    }
};

   
int main()
{
    Solution s;
    vector <int> ans = s.divisors(8);
    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}