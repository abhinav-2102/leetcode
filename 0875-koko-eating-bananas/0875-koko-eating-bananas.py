class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left,right=1,max(piles)
        
        while left<right:
            mid=(left+right)//2
            hour=0
            for p in piles:
                hour+=(p+mid-1)//mid
            if hour<=h:
                right=mid
            else:
                left=mid+1
        return left

                
        
        