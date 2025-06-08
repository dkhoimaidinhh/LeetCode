#include <vector>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxGap = 0;
        int size = prices.size();
        int currentMin = prices[0];

        for (int i = 1; i < size; i++) {
            if (prices[i] - currentMin > maxGap) {
                maxGap = prices[i] - currentMin;
            }
            else if (prices[i] < currentMin) {
                currentMin = prices[i];
            }
        }
        return maxGap;
    }
};