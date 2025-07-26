class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ptr1=0,ptr2=1;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ptr1){
                cnt1++;
            }
            else if(nums[i]==ptr2){
                cnt2++;
            }
            else if(cnt1==0){
                ptr1=nums[i];
                cnt1++;
            }
            else if(cnt2==0){
                ptr2=nums[i];
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ptr1){
                cnt1++;
            }
            else if(nums[i]==ptr2){
                cnt2++;
            }
        }
        vector<int>ans;
        int measure=n/3+1;
        if(cnt1>=measure)
            ans.push_back(ptr1);
        if(cnt2>=measure)
            ans.push_back(ptr2);
        return ans;
    }
};