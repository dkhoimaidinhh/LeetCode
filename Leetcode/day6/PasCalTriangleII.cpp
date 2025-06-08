#include <vector>
using namespace std;
// This solution takes O(rowIndex^2) time and O(rowIndex) space.
// It generates the entire Pascal's triangle up to the given rowIndex

class Solution {
public:
    vector<int> getRow(int rowIndex) {
    vector<vector<int>> result;
    result.push_back({1});

    for (int i = 1; i <= rowIndex; i++) {
        vector<int> current;
        current.push_back(1);

        for (int j = 1; j < i; j++) {
            current.push_back(result[i-1][j-1] + result[i-1][j]);
        }

        current.push_back(1);
        result.push_back(current);
    }

    return result[rowIndex];
}
};

// We can optimize the space complexity to O(rowIndex) by only keeping the last row generated, as we only need the previous row to compute the current row.

class Solution {
public:
    vector<int> getRow(int rowIndex) {
    vector<int> row(rowIndex + 1, 0);
    row[0] = 1;

    for (int i = 1; i <= rowIndex; ++i) {
        // Update from right to left to avoid overwriting needed values
        for (int j = i; j >= 1; --j) {
            row[j] += row[j - 1];
        }
    }

    return row;
}
};