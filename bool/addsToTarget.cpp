//
// Created by bokket on 2021/1/22.
//

#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> addsToTarget(vector<int>& numbers,int target)
{
    unordered_map<int,int> hashMap;
    vector<int> vi(2);
    for(auto it=numbers.begin();it!=numbers.end();it++)
    {
        if(hashMap.count( target - *it ))
        {
            vi[0]=(int) (it-numbers.begin()) +1;
            vi[1]=hashMap[ target - *it ]+1;
            return vi;
        }
        hashMap[ *it ]=(int) (it-numbers.begin());
    }
}