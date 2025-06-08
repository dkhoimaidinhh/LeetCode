#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;

        // 1. Duyệt qua mảng, di chuyển số khác 0 lên đầu
        for (int num : nums) {
            if (num != 0) {
                nums[insertPos++] = num;
            }
        }

        // 2. Gán 0 vào phần còn lại của mảng
        while (insertPos < nums.size()) {
            nums[insertPos++] = 0;
        }
    }
};