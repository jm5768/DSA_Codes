class Solution {
public:
    int maxDepth(string s) 
    {
        int result=0;
        int balance=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') balance++;
            else if(s[i]==')') 
            {
                result=max(result,balance);
                balance--;
            }
            else continue;
            
        }
        return result;
    }
};
