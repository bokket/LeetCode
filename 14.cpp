//
// Created by bokket on 2021/2/4.
//

#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        else if(strs.size()==1)
            return strs[0].c_str();

        int len;
        len=strs[0].length() > strs[1].length() ? strs[1].length():strs[0].length();

        for(int i=0;i<strs.size()-1;i++)
        {
            if(len==0)
                return "";
            int m_len=0;
            for(int j=0;j<len;j++)
            {
                if(strs[i][j]==strs[i+1][j])
                      m_len++;
                else
                    break;
            }
            len=m_len;
        }
        return strs[0].substr(0,len);
    }
};