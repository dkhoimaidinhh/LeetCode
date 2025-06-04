#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int size = nums.size();
        vector<string> result;
        for (int i = 0; i < size; i++) {
            string input = to_string(nums[i]);
            bool flag = false;
            if (i == size - 1) {
                result.push_back(input);
                break;
            }
            while (i + 1 < size && nums[i + 1] == nums[i] + 1) {
                flag = true;
                i++;
            }
            if (flag) {
                input += "->" + to_string(nums[i]);
                result.push_back(input);
            }
            else {
                result.push_back(input);
            }
        }
        return result;
    }
};