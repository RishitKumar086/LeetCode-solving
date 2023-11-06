class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==1)
            return 1;
        int len=0;
        int let_enc=0;
        int j=s.size()-1;
        for(;j>=0;j--)
        {
            if(s[j]==' ' && let_enc==0)
            {
                continue;
            }
            else if(s[j]!=' ' && let_enc==0)
            {
                let_enc=1;
                len++;
            }else if(s[j]==' ' && let_enc)
            {
                let_enc=0;
                break;
            }
            else if(let_enc)
                len++;
        }
        if(let_enc && len==0)
            len++;
        return len;
    }
};