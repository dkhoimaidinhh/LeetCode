#include <vector>
#include <iostream>
#include <limits.h>
using namespace std;
// This is the second solution to the third maximum number problem.
// It uses a single pass with O(n) time complexity and O(1) space complexity. But I think this is the best one.
// It using the same method but the condition is cleaner and more efficient.

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max1 = LONG_MIN, max2 = LONG_MIN, max3 = LONG_MIN;

        for (int num : nums) {
            if (num == max1 || num == max2 || num == max3) continue;

            if (num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            }
            else if (num > max2) {
                max3 = max2;
                max2 = num;
            }
            else if (num > max3) {
                max3 = num;
            }

            // Debug:
            cout << max1 << " " << max2 << " " << max3 << endl;
        }

        return (max3 == LONG_MIN) ? max1 : max3;
    }
};