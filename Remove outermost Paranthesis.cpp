class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        string ans;
        int balance=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                if(balance>0) ans+=s[i];
                balance++;
            }
            else
            {
                balance--;
                if(balance>0) ans+=s[i];
            }
        }
        return ans;
    }
};
