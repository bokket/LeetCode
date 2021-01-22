//
// Created by bokket on 2021/1/22.
//

#include <algorithm>
#include <unordered_map>

using namespace std;

bool isPermutation(string stringA,string stringB)
{
    if(stringA.length()!=stringB.length())
        return false;

    unordered_map<char,int> HashMapA;
    unordered_map<char,int> HashMapB;

    for(int i=0;i<stringA.length();i++)
    {
        HashMapA[ stringA[i] ]++;
        HashMapB[ stringB[i] ]++;
    }

    if(HashMapA.size()!=HashMapB.size())
        return false;

    unordered_map<char,int>::iterator it;

    for(it=HashMapA.begin();it!=HashMapA.end();it++)
    {
        if(it->second != HashMapB[ it->first ] )
            return false;
    }
    return true;
}