#include <vector>
using namespace std;

// using DFS to generate numbers in lexicographical order
// by using a tree with start node 1 and each node has 10 children

class Solution {
public:
    vector<int> lexicalOrder(int n) {
    vector<int> result;
    int cur = 1;

    for (int i = 0; i < n; ++i) {
        result.push_back(cur);

        if (cur * 10 <= n) {
            cur *= 10;
        } else {
            while (cur % 10 == 9 || cur + 1 > n) {
                cur /= 10;
            }
            cur += 1;
        }
    }

    return result;
}

};