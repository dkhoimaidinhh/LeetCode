#######################LeetCode 1#######################

#Contains Duplicate
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        nums.sort()
        maxIndex = len(nums)
        for i in range(len(nums) - 1, -1, -1):
            for j in range(i - 1, -1, -1):
                if nums[i] == nums[j]:
                    return True
       
        return False

#Valid Anagram
#Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        maxlength1 = len(s)
        maxlength2 = len(t)
        if (maxlength1 != maxlength2):
            return False
        for i in range (0, maxlength1, 1):
            print(t.find(s[0]))
            if (t.find(s[0]) != -1):
                target = s[0]
                t = t.replace(target,"", 1)
                s = s.replace(target,"", 1)
            else:
                return False
        return True

#twoSum
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = []
        for i in range (0, len(nums) - 1, 1):
            for j in range (i + 1, len(nums), 1):
                if (nums[i] + nums[j] == target):
                    result.append(i)
                    result.append(j)
        
        return result
    
#Group Anagrams
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        maxlength1 = len(s)
        maxlength2 = len(t)
        if (maxlength1 != maxlength2):
            return False
        for i in range (0, maxlength1, 1):
            if (t.find(s[0]) != -1):
                target = s[0]
                t = t.replace(target,"", 1)
                s = s.replace(target,"", 1)
            else:
                return False
        return True

    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = []
        seen = set()

        for i in range (0, len(strs), 1):
            if i in seen:
                continue
            current = []
            current.append(strs[i])
            seen.add(i)
            for j in range (i + 1, len(strs), 1):
                if j in seen: 
                    continue
                if(self.isAnagram(strs[i], strs[j])):
                    current.append(strs[j])
                    seen.add(j)
            result.append(current)
        return result


#Top K Frequent Elements
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

#Encode and Decode Strings
class Solution:

    def encode(self, strs: List[str]) -> str:
        if not strs:
            return ""
        return " ".join(strs)
        
    def decode(self, s: str) -> List[str]:
        result = []
        currentIndex = 0
        while True:
            index = s.find(" ", currentIndex)
            if index == -1:
                break
            result.append(s[currentIndex:index])
            currentIndex = index + 1
        result.append(s[currentIndex:]) 
        return result