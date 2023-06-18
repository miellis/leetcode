class Solution:
    def reverseVowels(self, s: str) -> str:
        
        i = 0
        j = len(s) - 1
        s_rev = list(s)
        
        vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
        
        while i < j:
            if s[i] not in vowels:
                i += 1
                continue
            if s[j] not in vowels:
                j -= 1
                continue
            
            s_rev[i], s_rev[j] = s_rev[j], s_rev[i]
            i += 1
            j -= 1
            print(i, j)
        
        return "".join(s_rev)
            
                        
            