//
// Created by bokket on 2021/2/4.
//
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        string s="1";

        for(int i=1;i<n;i++)
        {
            string tmp;
            for(int j=0;j<s.size();j++)
            {
                int cnt=1;
                while( j+1<s.size() && s[j]==s[j+1] )
                {
                    j++;
                    cnt++;
                }
                tmp+=to_string(cnt)+s[j];
            }
            s=tmp;
        }
        return s;
    }
};