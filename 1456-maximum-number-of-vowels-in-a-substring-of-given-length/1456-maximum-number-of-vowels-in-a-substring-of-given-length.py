class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        
        vowels = "aeiou"
        
        l = 0
        r = k - 1
        
        curr_vowels = 0
        
        for v in s[l:r+1]:
            if v in vowels:
                curr_vowels += 1
        
        
        l += 1
        r += 1
        max_vowels = curr_vowels
        
                
        while r < len(s):
            
            if s[l-1] in vowels:
                curr_vowels -= 1
            
            if s[r] in vowels:
                curr_vowels += 1
                
            if curr_vowels > max_vowels:
                max_vowels = curr_vowels
                
            
            r += 1
            l += 1
        
        return max_vowels