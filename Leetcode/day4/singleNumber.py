class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        seen = {}
        for number in nums:
            if (number in seen):
                seen[number] += 1
            else:
                seen[number] = 1
        
        for x in seen:
            if seen[x] == 1:
                return x

##I will use this function because XOR can not solve the whole problems