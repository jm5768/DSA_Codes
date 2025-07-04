class Solution {
  public:
    int countSubstring(string s) {
        
        int count = 0;
        int n=s.length();
        for(int i=0;i<s.length();i++)
        {
            int hash[3]={0};
            for(int j=i;j<s.length();j++)
            {
                hash[s[j]-'a']=1;
                if(hash[0]+hash[1]+hash[2]==3) 
                {  
                    count=count+(n-j); 
                    break;
                }
            }
        }
        return count;
        
    }
};
