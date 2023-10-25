class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        stack<char> stack;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(stack.size()>0){
                    ans.push_back(s[i]);
                }
                stack.push(s[i]);
            }
            else{
                stack.pop();
                if(stack.size()>0)
                    ans.push_back(s[i]);
            }
        }
        return ans;
    }
};