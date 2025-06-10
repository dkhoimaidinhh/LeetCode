#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//this is the first solution to the third maximum number problem.
// It uses a single pass with O(n) time complexity and O(1) space complexity.
// It keeps track of the three maximum numbers found so far. But it also use another library so make it slow.


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max1 = nums[0];
        long max2 = LONG_MIN;
        long max3 = LONG_MIN;
        int size = nums.size();
        for (int i = 1;  i < size; i++) {
            if (max1 < nums[i]) {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            }
            else if ((max2 < nums[i] || max2 == NULL) && nums[i] != max1) {
                max3 = max2;
                max2 = nums[i];
            }
            else if ((max3 < nums[i] || max3 == NULL) && nums[i] != max2 && nums[i] != max1) {
                max3 = nums[i];
            }
            cout << max1 << " " << max2 << " " << max3 << endl;
        }
        return (max3 == LONG_MIN)? (int)max1 : (int)max3;
    }
};