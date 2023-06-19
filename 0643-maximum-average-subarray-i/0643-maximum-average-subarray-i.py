class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        
        l = 0
        r = k
        curr_sum = max_sum = sum(nums[l:r])
        
        while r < len(nums):
            
            l += 1
            r += 1
            
            curr_sum = curr_sum - nums[l-1] + nums[r-1]
            
            if curr_sum > max_sum:
                max_sum = curr_sum
           
            
        return max_sum/k