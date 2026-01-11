class Solution:
    def maxArea(self, height: List[int]) -> int:
        most=0
        left=0
        right=len(height)-1
        while left<right:
            water=(right-left)*min(height[left],height[right])
            most=max(water,most)
            if height[left]<height[right]:
                left+=1
            else:
                right-=1
        return most
