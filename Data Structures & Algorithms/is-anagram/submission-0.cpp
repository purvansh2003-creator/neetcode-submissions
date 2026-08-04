class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        vector<int> freqS(26);
        vector<int> freqT(26);

        for(int i=0;i<s.size();i++)
        {
            freqS[(int)s[i] - 97]++;
        }
        for(int i=0;i<t.size();i++)
        {
            freqT[(int)t[i] - 97]++;
        }
        if( freqS == freqT )
        return true;
        else
        return false;

    }
};
