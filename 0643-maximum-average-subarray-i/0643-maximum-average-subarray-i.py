class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        
        l = 0
        r = k - 1
        
        curr_sum = max_sum = sum(nums[l:r+1])
        
        l += 1
        r += 1
        
        while r < len(nums):
            
            curr_sum = curr_sum - nums[l-1] + nums[r]
            
            if curr_sum > max_sum:
                max_sum = curr_sum
            
            l += 1
            r += 1
            
            
        return max_sum/k