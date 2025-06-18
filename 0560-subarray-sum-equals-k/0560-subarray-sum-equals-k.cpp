class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        vector<int>prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=nums[i]+prefix[i-1];
        }
        unordered_map<int,int>mp;
        int num=0;
        for(int i=0;i<n;i++){
            if(prefix[i]==k){
                num++;
            }
            if(mp.find(prefix[i]-k)!=mp.end()){
                num+=mp[prefix[i]-k];
            }
            mp[prefix[i]]++;
        }
        return num;
    }
};