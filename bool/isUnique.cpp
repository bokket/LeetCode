//
// Created by bokket on 2021/1/22.
//

#include <algorithm>
#include <bitset>
using namespace std;

bool isUnique(string input)
{
    bitset<256> hashmap;
    for(int i=0;i<input.length();i++)
    {
        //出现了
        if(hashmap[ (int)input[i] ])
            return false;

        hashmap[ (int)input[i] ]=1;
    }
    return true;
}