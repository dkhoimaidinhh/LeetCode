#include <vector>
using namespace std;

// Dạng này cách tiếp cận rất hay, nếu muốn tính tổng từ left đến right:
// B1: Chuyển từ ma trận sang mảng prefix sum
// B2: Tính tổng từ left đến right bằng công thức: prefixSum[right + 1] - prefixSum[left]
// Thời gian O(n), không gian O(n)

class NumArray {
private:
    vector<int> prefixSum;

public:
    NumArray(vector<int>& nums) {
        int size = nums.size();
        prefixSum.resize(size + 1, 0);
        for (int i = 0; i < size; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};