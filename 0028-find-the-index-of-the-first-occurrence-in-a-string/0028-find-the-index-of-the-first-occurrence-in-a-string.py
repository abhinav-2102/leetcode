class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        for j in range(len(haystack) - len(needle) + 1):
            if haystack[j:j+len(needle)] == needle:
                return j
        return -1
        