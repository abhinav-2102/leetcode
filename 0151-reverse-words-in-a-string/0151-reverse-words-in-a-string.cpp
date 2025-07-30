class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int start=0;
        for(int end=0;end<s.length();end++){
            if(s[end]==' '){
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;
            }
        }
        reverse(s.begin()+start,s.end());
        int write_idx = 0; 
        int read_idx = 0; 
        while (read_idx < s.length() && s[read_idx] == ' ') {
            read_idx++;
        }
        while (read_idx < s.length()) {
            if (write_idx > 0) {
                s[write_idx++] = ' ';
            }
        while (read_idx < s.length() && s[read_idx] != ' ') {
            s[write_idx++] = s[read_idx++];
        }
        while (read_idx < s.length() && s[read_idx] == ' ') {
            read_idx++;
        }
    }
        s.resize(write_idx);
        return s;
    }
};