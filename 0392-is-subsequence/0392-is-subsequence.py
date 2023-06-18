class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        
        i = 0
        
        sub = ''
        
        for j in range(len(t)):
            if i < len(s):
                if s[i] == t[j]:
                    sub += s[i]
                    i += 1
        
        if sub == s:
            return True
                
        