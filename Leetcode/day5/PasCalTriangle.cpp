#include <vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        if (numRows >= 1)
            result.push_back({1});
        if (numRows >= 2)
            result.push_back({1, 1});
        for (int i = 2; i < numRows; i++) {
            vector<int> current;
            current.push_back(1);
            int count = 1;
            while(count < i) {
                current.push_back(result[i-1][count] + result[i-1][count-1]);
                count++;
            }
            current.push_back(1);
            result.push_back(current);
        }
        return result;
    }
};