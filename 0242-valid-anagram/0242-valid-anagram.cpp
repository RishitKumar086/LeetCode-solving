class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> sFreq;
        map<char,int> tFreq;

        for(int i=0;i<s.size();i++)
            sFreq[s[i]]++;

        for(int i=0;i<t.size();i++)
            tFreq[t[i]]++;

        return sFreq == tFreq;
    }
};