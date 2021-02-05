//
// Created by bokket on 2021/2/5.
//

#include <string>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    string modifyString(string s) {
        vector<char> v(26);
        for(int i=0;i<26;i++)
        {
            v[i]='a'+i;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                set<char> st(v.begin(),v.end());
                if(i>0)
                    st.erase(s[i-1]);
                if(i+1<s.size())
                    st.erase(s[i+1]);
                s[i]=*st.begin();
            }
        }
        return s;
    }
};