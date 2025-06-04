#include <vector>
#include <iostream>
using namespace std;

// cho sẵn array được sort

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
    int p1 = 0, p2 = 0;

    while (p1 < m && p2 < n) {
        if (nums1[p1] < nums2[p2]) {
            result.push_back(nums1[p1++]);
        } else {
            result.push_back(nums2[p2++]);
        }
    }
    // Nếu còn phần tử trong nums1 hoặc nums2 thì thêm vào kết quả
    while (p1 < m) result.push_back(nums1[p1++]);
    while (p2 < n) result.push_back(nums2[p2++]);

        nums1 = result;
    }
};