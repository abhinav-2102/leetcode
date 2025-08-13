class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(int c:s){
            freq[c]++;
        }
        priority_queue<pair<int,char>>maxHeap;
        for(auto& [ch,f]:freq){
            maxHeap.push({f,ch});
        }
        string result;
        while(!maxHeap.empty()){
            auto[count,ch]=maxHeap.top();
            maxHeap.pop();
            result+=string(count,ch);
        }
        return result;
    }
};