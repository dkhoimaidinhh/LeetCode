#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) continue;
            if (nums[i] == nums[i-1]) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
    }
};