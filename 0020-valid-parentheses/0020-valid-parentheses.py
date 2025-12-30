class Solution:
    def isValid(self, s: str) -> bool:
        st=[]
        for i in range(len(s)):
            if st:
                last=st[-1]
                if self.isPair(last,s[i]):
                    st.pop()
                    continue
            st.append(s[i])
        return not st
    def isPair(self,last,curr):
        if last == "(" and curr == ")" or last == "{" and curr == "}" or last == "[" and curr == "]":
            return True
        return False
