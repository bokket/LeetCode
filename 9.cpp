//
// Created by bokket on 2021/2/4.
//

#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int i,j;
        int flag=0;
        for(i=0,j=s.length()-1;i<s.length()-1;i++,j--)
        {
            if(s[i]!=s[j])
                flag=1;
        }
        if(flag==1)
            return false;
        else
            return true;
    }
};