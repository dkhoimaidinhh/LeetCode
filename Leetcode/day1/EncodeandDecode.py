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