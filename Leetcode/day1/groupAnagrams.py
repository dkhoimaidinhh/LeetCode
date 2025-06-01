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