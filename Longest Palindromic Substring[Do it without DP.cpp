class Solution {
public:

    bool isPalindrome(string& s, int l, int r)
    {
        while(l<=r)
        {
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
    string longestPalindrome(string s) 
    {
        
        int n=s.length();
        string longest;
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>=i;j--)
            {
                if(s[i]==s[j] && isPalindrome(s,i,j))
                {
                    int len=j-i+1;
                    if(longest.length()<len)
                    {
                        longest=s.substr(i,len);
                    }
                    break;

                }
            }
        }
        return longest;
    }
};
