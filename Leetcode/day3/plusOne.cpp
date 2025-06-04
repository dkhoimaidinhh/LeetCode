#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int last = size - 1;
        int i = 0;
        if (digits[last] == 9) {
            while (digits[last - i] == 9 && i < size) {
                digits[last - i] = 0;
                i++;
                if (i == size) {
                    digits.insert(digits.begin(), 1);
                    break;
                }
                else if (digits[last - i] != 9) {
                    digits[last - i] += 1;
                    break;
                }
            }
        }
        else {
            digits[last] += 1;
        }
        return digits;
    }
};