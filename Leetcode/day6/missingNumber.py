
class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        size = len(nums)
        for i in range (0, size + 1):
            if (i == size):
                return i
            if (i != nums[i]):
                return i