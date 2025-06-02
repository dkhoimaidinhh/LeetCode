class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        maxIndex = len(nums)
        for i in range(len(nums) - 1, -1, -1):
            for j in range(i - 1, -1, -1):
                if nums[i] == nums[j]:
                    return True
       
        return False
    
# We have to learn something more about the time complexity of this code.