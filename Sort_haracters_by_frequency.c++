class Solution {
public:
    string frequencySort(string s) {
        
        vector<int> freq(123, 0);

        // Step 2: Count frequency of each character
        for(auto ch : s )
        {
            freq[ch]++;
        }
        auto cmp =[&] (char a,char b)
        {
            if(freq[a]==freq[b]) return a<b;
            else return freq[a] > freq[b];
        };

        // Step 4: Sort the string using custom comparator
        sort(s.begin(),s.end(),cmp);
        return s;
    }
};
