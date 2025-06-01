class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        result = []

        for i in range (0, len(nums), 1):
            key = nums[i]
            if key in freq:
                freq[key] += 1
            else:
                freq[key] = 1
        
        sorted_keys = sorted(freq, key=lambda x: freq[x], reverse=True)
        for i in range (0, k, 1):
            value = sorted_keys[i]
            result.append(value)
        
        return result