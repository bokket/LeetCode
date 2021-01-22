//
// Created by bokket on 2021/1/21.
//

#include <algorithm>
#include <set>
#include <unordered_set>
#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        string str=to_string(x);

        if(x==0)
            return 0;
        if(x>0)
        {
            std::reverse(str.begin(),str.end());
        }
        if(x<0)
        {
            std::reverse(str.begin()+1,str.end());
        }
        long num=atol(str.c_str());
        if(num>INT_MAX || num<INT_MIN)
            num=0;
        return num;
    }
};