#include <vector>
#include <iostream>
using namespace std;

// Binary Seach được sử dụng vì đề yêu cầu timecomplexity O(log n)

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right) {
            int position = (left + right)/2;
            if(nums[position] == target) return position;
            else if (nums[position] < target) {
                left = position + 1;
            }
            else {
                right = position - 1;
            }
        }
        return left;
    }
};