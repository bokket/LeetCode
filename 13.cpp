//
// Created by bokket on 2021/2/4.
//

#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char,int> map;

        map['I']=1;
        map['V']=5;
        map['X']=10;
        map['L']=50;
        map['C']=100;
        map['D']=500;
        map['M']=1000;

        int res=0;
        for(int i=0;i<s.size()-1;i++)
        {

            if(map[s[i]]<map[s[i+1]])
                ans-=map[s[i]];
            else
                res+=map[s[i]];
        }
        res+=map[s.back()];

        res+=ans;

        return res;
    }
};