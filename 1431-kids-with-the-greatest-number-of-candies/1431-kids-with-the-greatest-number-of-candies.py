class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        
        bool_list = []
        
        most_candies = max(candies)

        for i in candies:
            if i + extraCandies >= most_candies:
                bool_list.append(True)
            else:
                bool_list.append(False)

        return bool_list

        
