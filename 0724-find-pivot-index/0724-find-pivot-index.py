class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        
        idx = -1
        
        left_sum = 0
        right_sum = sum(nums[1:])
        
        
        for i in range(0, len(nums)):
            
            left_sum = sum(nums[:i])
            right_sum = sum(nums[i+1:])
            
            if left_sum == right_sum:
                idx = i
                break
            
        
        return idx
        
        
        
            