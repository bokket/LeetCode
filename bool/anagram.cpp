//
// Created by bokket on 2021/1/22.
//

#include <algorithm>
#include <unordered_map>
using namespace std;


bool anagram(string s,string t)
{
    if(s.empty() || t.empty())
        return false;

    if(s.size()!=t.size())
        return false;

    int letterCnt[256]={0};

    for(int i=0;i!=s.size();i++)
    {
        letterCnt[s[i]]++;
        letterCnt[t[i]]--;
    }

    for(int i=0;i!=t.size();i++)
    {
        if(letterCnt[t[i]] <0)
            return false;
    }
    return true;
}


bool anagram(string s,string t)
{
    if(s.empty() || t.empty())
        return false;

    if(s.size()!=t.size())
        return false;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());


    if(s==t)
        return true;
    else
        return false;
}