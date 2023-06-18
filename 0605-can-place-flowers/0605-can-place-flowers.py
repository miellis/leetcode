class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        
        f = [0] + flowerbed + [0]
        cnt = 0
        
        for i in range(1, len(f)-1):
            if f[i-1] == 0 and f[i] == 0 and f[i+1] == 0:
                f[i] = 1
                cnt = cnt + 1
        
        if cnt >= n:
            return True
        else:
            return False
                
            