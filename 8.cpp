//
// Created by bokket on 2021/2/4.
//
#include <string>
#include <vector>
#include <limits.h>
#include <cmath>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int ans=0;
        int sign=1;
        int i=0;
        if(s==" ")
            return 0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                break;
        }
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
        {
            i++;
        }

        if(i==s.size() || s[i]<'0' || s[i]>'9' )
            return 0;

        while(i<s.size()  && s[i]>='0'  && s[i]<='9')
        {
            if( ans>INT_MAX/10  ||   (ans==INT_MAX/10 && (s[i]-'0')>INT_MAX%10 ) )
                return INT_MAX;
            if( ans<INT_MIN/10  ||   (ans==INT_MIN/10 && (s[i]-'0')>( -(INT_MIN%10 ) ) ) )
                return INT_MIN;
            ans=ans*10+sign*(s[i]-'0');
            i++;
        }
        return ans;
    }
};
