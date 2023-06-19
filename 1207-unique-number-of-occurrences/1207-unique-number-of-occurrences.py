class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        
        set_arr = set(arr)
        occ_arr = []
        
        for i in set_arr:
            cnt = 0
            for j in arr:
                if j == i:
                    cnt += 1
            occ_arr.append(cnt)
        
        
        occ_set = set(occ_arr)
        if len(occ_set) == len(occ_arr):
            return True
                    
                    
        