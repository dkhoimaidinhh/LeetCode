#include <vector>
#include <algorithm>
using namespace std;
// This is the first approach to solve the intersection of two arrays problem.
// It uses a brute force method with O(n^2) time complexity and O(n) space complexity.

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int> result;
        for (int i = 0; i < len1; i++) {
            for (int j = 0; j < len2; j++) {
                if (nums1[i] == nums2[j]) {
                    int resultSize =  result.size();
                    bool flag = true;
                    if (resultSize > 0) {
                        int currentValue = nums1[i];
                        for (int k = 0; k < resultSize; k++) {
                            if(currentValue == result[k]) {
                                flag = false;
                                break;
                            }
                        }
                    }
                    if (flag || resultSize == 0) {
                        result.push_back(nums1[i]);
                    }
                    else break;
                }
            }
        }
        return result;
    }
};

// This is the second approach to solve the intersection of two arrays problem.
// It uses remove duplicates and sorting to achieve O(n log n) time complexity and O(n) space complexity.
class Solution {
public:
    void RemoveDublicate(vector<int> &NUM){
        if(NUM.size()==NULL || NUM.empty()) return ;

        int j = 1;
        for(int i = 1; i<NUM.size(); i++){
            if(NUM[i]!=NUM[i-1]){
                NUM[j] = NUM[i];
                j++;
            }
        }
        // Resize of vector till unique -> j gives total number of unqiue
        NUM.resize(j); 
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        // Sort both i/p
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        // Remove Dublicates
        RemoveDublicate(nums1);
        RemoveDublicate(nums2);
        // Check for matchs :
        int i=0,j=0;
        // i>=nums1.size() means checking of all in nums1 is done 
        // j>=nums2.size() means all nums2 no is match in nums1
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++,j++;
            }
            else if(nums1[i]>nums2[j])
            j++;
            else 
            i++;
        }
        return ans;
    }
};