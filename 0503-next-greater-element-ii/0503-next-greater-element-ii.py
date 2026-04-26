class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        sampleArr=nums+nums
        n=len(nums)
        result=[-1]*n
        for i in range(n):
            for j in range(i+1,i+n):
                if sampleArr[j]>sampleArr[i]:
                    result[i]=sampleArr[j]
                    break
        return result
