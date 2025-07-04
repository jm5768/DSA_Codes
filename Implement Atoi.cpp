class Solution {
public:
    int myAtoi(string s) {
        int ans=0;
        int sign=1;
        int n=s.size();
        int flag=0;
        int p=0;
        
        for (int i=0;i<n;i++)
        {
            if(flag==2&&(s[i]=='-'||s[i]=='+'||s[i]==' ')) return 0;
            if(s[i]==' '&&p==1)  break;
            if(s[i]==' ') continue;

            
            if(flag==0&&s[i]=='-')
            {
                sign=-1;
                flag = 2;
                continue;
                
            }
            else if(flag==0&&s[i]=='+')
            {
                sign=1;
                flag = 2;
                continue;
            }
            
            if(isdigit(s[i]))
            {
                if (ans > (INT_MAX - (s[i]-'0') ) / 10) 
                {
                    return (sign == 1) ? INT_MAX : INT_MIN;
                }
                ans=ans * 10 + (s[i]-'0');
                flag=1;
                p=1;
            }
            else break;
            
        }
        return ans*sign;
    }
};
