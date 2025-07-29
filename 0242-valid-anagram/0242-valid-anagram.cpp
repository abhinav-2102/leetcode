class Solution {
public:
    const int CHAR=26;
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        int count[26]={0};
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(int j=0;j<CHAR;j++){
            if(count[j]!=0)
                return false;
        }
        return true;
    }
};