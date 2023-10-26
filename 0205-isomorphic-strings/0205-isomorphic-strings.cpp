class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        map<char,char> ans1;
        map<char,char> ans2;
        for(int i=0;i<s.size();i++)
        {
            if((ans1.find(s[i])!=ans1.end() && ans1[s[i]]!=t[i]) || (ans2.find(t[i])!=ans2.end() && ans2[t[i]]!=s[i]))
            {
                return false;
            }
            ans1[s[i]]=t[i];
            ans2[t[i]]=s[i];

        }
        return true;
    }
};