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

//Consider preferred solution:

// class Solution {
// public:
//     vector<string> summaryRanges(vector<int>& nums) {
//         int n = nums.size();
//         vector<string> vec;
//         if (n == 0) return vec; 
//         int a = 0;
//         int b = 0;
//         for (int i = 1; i < n; i++) {
//             if (nums[i] == nums[i - 1] + 1) {
//                 b = i;
//             } 
//             else {
//                 if (a == b) {
//                     vec.push_back(to_string(nums[a]));
//                 } 
//                 else {
//                     vec.push_back(to_string(nums[a]) + "->" +
//                                   to_string(nums[b]));
//                 }
//                 a = i;
//                 b = i;
//             }
//         }
//         if (a == b) {
//             vec.push_back(to_string(nums[a]));
//         } else {
//             vec.push_back(to_string(nums[a]) + "->" + to_string(nums[b]));
//         }
//         return vec;
//     }
// };