class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mpp =
        {
            {'I',1}, {'V',5}, {'X',10}, {'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int total=0;
        
        for(int i=0;i<s.length();i++)
        {
            int curr = mpp[s[i]];
        
            if(i>0)
            {
                
                int prev = mpp[s[i-1]];
                if(curr>prev)
                {
                    total+=(curr-2* prev);
                }
                else
                {
                    total+=curr;
                }
            }
            else
            {
                total=mpp[s[i]];
            }

        }
        return total;

    }
};
