#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.size();
        if (numFriends > n) return "";
        if (numFriends == 1) return word;

        int maxLen = n - (numFriends - 1);

        // Tìm vị trí bắt đầu suffix lớn nhất
        int i = 0, j = 1, k = 0;
        while (j < n && i < n && k < n) {
            if (word[i + k] == word[j + k]) {
                k++;
            } else if (word[i + k] < word[j + k]) {
                i = i + k + 1;
                if (i <= j) i = j + 1;
                k = 0;
            } else {
                j = j + k + 1;
                if (j <= i) j = i + 1;
                k = 0;
            }
        }

        int start = min(i, j);
        return word.substr(start, maxLen);
    }
};


//Tham khảo các cách giải quyết bài toán này:
// https://leetcode.com/problems/find-the-lexicographically-largest-string-from-the-box-i/?envType=daily-question&envId=2025-06-04