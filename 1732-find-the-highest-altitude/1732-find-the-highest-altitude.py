class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        
        
        curr_alt = max_alt = 0
        
        for i in range(len(gain)):
            
            curr_alt += gain[i]
            
            if curr_alt > max_alt:
                max_alt = curr_alt
        
        return max_alt
        
        