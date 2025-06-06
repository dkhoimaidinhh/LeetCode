# class Solution(object):
#     def majorityElement(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         freq = {}
#         for number in nums:
#             if (number in freq):
#                 freq[number] += 1
#             else:
#                 freq[number] = 1
#         return max(freq, key = lambda x: freq[x])

# you need to find more solution because this take O(n) time and O(n) space
# Boyer-Moore Voting Algorithm
class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        candidate = None
        
        for num in nums:
            if count == 0:
                candidate = num
            count += (1 if num == candidate else -1)
        
        return candidate

if __name__ == "__main__":
    nums = [3, 3, 3, 2, 2, 2, 1, 1, 1, 2]
    count = 0
    candidate = None
    print("Step-by-step Boyer-Moore Voting Algorithm:")
    for i, num in enumerate(nums):
        print(f"Step {i+1}: num={num}, count={count}, candidate={candidate}")
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)
        print(f"    After: count={count}, candidate={candidate}")
    print(f"\nMajority element is: {candidate}")