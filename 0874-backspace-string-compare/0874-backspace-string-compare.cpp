class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')
            {
                s1.push(s[i]);
                continue;
            }
            else if(!s1.empty())
            {
                s1.pop();
            }
        }
        string ans1="";
        while(!s1.empty())
        {
            ans1.push_back(s1.top());
            s1.pop();
        }
        reverse(ans1.begin(),ans1.end());
        // cout<<ans1<<endl;

        stack<char> s2;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#')
            {
                s2.push(t[i]);
                continue;
            }
            else if(!s2.empty())
            {
                s2.pop();
            }
        }
        string ans2="";
        while(!s2.empty())
        {
            ans2.push_back(s2.top());
            s2.pop();
        }
        reverse(ans2.begin(),ans2.end());
        // cout<<ans2<<endl;
        if(ans1==ans2)
            return 1;
        return 0;
    }
};