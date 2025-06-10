# //Maximum Difference Between Even and Odd Frequency I
# //I think in this problem, we should use python with the dictionary to solve it.
from collections import Counter

class Solution:
    def maxDifference(self, s: str) -> int:
        freq = Counter(s)
        odds = []
        evens = []

        for count in freq.values():
            if count % 2 == 0:
                evens.append(count)
            else:
                odds.append(count)

        if not odds or not evens:
            return -1

        max_diff = float('-inf')
        for odd in odds:
            for even in evens:
                max_diff = max(max_diff, odd - even)

        return max_diff