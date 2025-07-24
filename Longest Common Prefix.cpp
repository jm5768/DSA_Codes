class Solution {
public:
    string longestCommonPrefix(vector<string>& s) 
    {
        int n=s.size();
        string ans=s[0];
        for(int i=1;i<n;i++)
        {
            string result;
            for(int j=0;j<s[i].size();j++)
            {
            
                if(j<ans.size()&&ans[j]==s[i][j])
                {
                    if(result.size()==0) result=s[i][j];
                    else result+=s[i][j];
                }
                else break;
                
            }
            ans=result;
        }
        return ans;
    }
};
