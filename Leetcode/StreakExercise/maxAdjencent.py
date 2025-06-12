class Solution:
    def maxAdjacentDistance(self, nums: List[int]) -> int:
        maxGap = None
        length = len(nums)
        for i in range (0, length - 1):
            if(i == 0):
                print(abs(nums[length-1] - nums[0]))
                print(abs(nums[i+1] - nums[0]))
                maxGap = abs(nums[length-1] - nums[0]) if (abs(nums[length-1] - nums[0]) > abs(nums[i+1] - nums[0])) else abs(nums[i+1] - nums[0])
            else:
                current = abs(nums[i+1] - nums[i])
                if (current > maxGap):
                    maxGap = current
        return maxGap
