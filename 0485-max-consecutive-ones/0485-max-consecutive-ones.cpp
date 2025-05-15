class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res=0;
        int max=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                res++;
                if(res>=max){
                    max=res;
                }
            }
            else{
                res=0;
            }
            
        }
        return max;
    }
};