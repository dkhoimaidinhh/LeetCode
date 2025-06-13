class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        """
        :type g: List[int]  # nhu cầu của trẻ
        :type s: List[int]  # kích cỡ bánh
        :rtype: int
        """
        g.sort()
        s.sort()

        i = j = 0
        while i < len(g) and j < len(s):
            if s[j] >= g[i]:
                i += 1  # gán bánh này cho trẻ
            j += 1
        return i  # số trẻ được cho bánh
