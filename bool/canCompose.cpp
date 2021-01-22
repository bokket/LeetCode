//
// Created by bokket on 2021/1/22.
//

#include <hash_map>
#include <map>
#include <unordered_map>
using namespace std;

bool canCompose(string newspaper,string message)
{
    unordered_map<char,int> HashMap;

    int i;

    if(newspaper.length() < message.length())
        return false;

    for(i=0;i<newspaper.length();i++)
        HashMap[ newspaper[i] ]++;

    for(int i=0;i<message.length();i++)
    {
        if(HashMap.count( message[i] )==0)
            return false;

        //
        if(--HashMap[ message[i] ]<0)
            return false;
    }
    return true;
}