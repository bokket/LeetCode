//
// Created by bokket on 2021/2/5.
//

#include <string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int quick=1;
        int slow=0;
        string t;
        for(int i=0;i<s.size();i++)
        {
            if(s[slow+i]!=s[quick+i])
            {
                quick++;
                t+=s[slow]+s[quick];
            }
        }


    }
};