class Solution {
public:

    string encode(vector<string>& strs) 
    {
        string encodedString = "";
        for(int i=0;i<strs.size();i++)
        {
            encodedString += to_string(strs[i].size()) + '#' + strs[i];
        }
        return encodedString;
    }

    vector<string> decode(string s) 
    {
        vector<string> ans;
        int i=0;
        int j=i;
        while(i<s.size())
        {
            if(s[i] == '#')
            {
                int length = stoi(s.substr(j,i-j));
                string decodeString = s.substr(i+1,length);
                ans.push_back(decodeString);
                i = i+length+1;
                j=i;
            }
            else
            i++;
        }
        return ans;
    }
};
