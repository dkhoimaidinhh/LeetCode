#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val);
};

int Solution::removeElement(vector<int>& nums, int val) {
        vector<int> result;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
            result.push_back(nums[i]);
            count++;
            }
        }
        nums.clear();
        nums = result;
        return count;
    }