class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int i = 0;
        string ans, word;

        while (i < n) {
            while (i < n && s[i] == ' ') i++;
            if(i>=n) break;
            int j = i ;
            while (j < n && s[j] != ' ') j++;
        
            word = s.substr(i, j - i);
            if(ans.length()==0) ans=word;
            else ans = word+" "+ans;

            i=j+1;
        }

        return ans;
    }
};
