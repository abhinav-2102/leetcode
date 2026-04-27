class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        n=len(nums)
        res=[-1]*n
        st=[]
        for i in range(2*n-1,-1,-1):
            curr=nums[i%n]
            while st and st[-1]<=curr:
                st.pop()
            if i<n:
                res[i]=st[-1] if st else -1
            st.append(curr)
        return res