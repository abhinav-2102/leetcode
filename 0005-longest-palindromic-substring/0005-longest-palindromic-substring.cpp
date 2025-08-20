class Solution {
public:
    bool isPalindrome(string &s,int start,int last){
        int n=s.size();
        while(start<last){
            if(s[start]==s[last]){
                start++;
                last--;
            }
            else{
                return false;
                break;
            }
        }
        return true;
        
    }
    string longestPalindrome(string s){
        int n=s.size();
        int starting_index = 0;
        int max_len = 0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPalindrome(s,i,j)){
                    if(j-i+1 > max_len){
                        max_len=j-i+1;
                        starting_index = i;
                    }
                }
            }
        }
        return s.substr(starting_index,max_len);
    }
};