class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        
        def counter(word):
            count = {}
            for char in word:
                if char not in count:
                    count[char] = 0
                count[char] += 1
            return count
            
        count1 = counter(word1)
        count2 = counter(word2)
        
        freq1 = list(count1.values())
        freq2 = list(count2.values())
        freq1.sort()
        freq2.sort()
        
        
        if freq1 == freq2 and set(word1) == set(word2):
            return True
        
            
        
        
                
            