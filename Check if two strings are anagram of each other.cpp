class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length()!=t.length()) return false;
        int freq[26];
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'a']++;
        }
        for(int i=0;i<n;i++)
        {
            freq[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i]!=0) return false;
        }
        return true;
    }
};
