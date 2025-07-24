class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        if(s.length()!=t.length()) return false;
        int n=s.length();
        map<char,char> mpp;
        for(int i=0;i<n;i++)
        {
            char org = s[i];
            char rep = t[i];
            if(mpp.find(org)==mpp.end())
            {
                for(auto it : mpp)
                {
                    if(it.second==rep) return false;
                }
                mpp[org]=rep;
            }
            else 
            {
                if(mpp[org]!=rep) return false;
            }
        }
        return true;
    }
};
