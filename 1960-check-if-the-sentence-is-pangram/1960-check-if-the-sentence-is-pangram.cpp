class Solution {
public:
    bool checkIfPangram(string sentence) {
        char ans[26]={0};
        for(int i=0;i<sentence.size();i++)
            ans[sentence[i]-'a']++;

        for(int i=0;i<26;i++)
        {
            if(ans[i]==0)
                return false;
        }
        return true;
    }
};