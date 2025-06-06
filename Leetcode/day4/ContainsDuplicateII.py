class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        seen = {}
        for index, number in enumerate(nums):
            if (number not in seen): 
                seen[number] = index
            else:
                if (abs(seen[number] - index) <= k):
                    return True
                else:
                    seen[number] = index
        return False
                
        