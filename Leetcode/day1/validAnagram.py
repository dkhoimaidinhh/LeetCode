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