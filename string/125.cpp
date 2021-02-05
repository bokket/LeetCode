//
// Created by bokket on 2021/2/6.
//

#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);

        auto left=s.begin();
        auto right=prev(s.end());

        while(left<right)
        {
            //判断一个字符是否属于a~z||A~Z||0~9
            if(::isalnum(*left)==0)
            {
                left++;
            }
            else if(::isalnum(*right)==0)
            {
                right--;
            }
            else if(*left!=*right)
                return false;
            else
            {
                left++;
                right--;
            }
        }
        return true;
    }
};