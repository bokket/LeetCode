//
// Created by bokket on 2021/2/10.
//
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        vector<vector<string>> ans;
        for(auto s:strs)
        {
            auto key=s;
            sort(key.begin(),key.end());
            res[key].push_back(s);
        }
        for(auto elem:res)
        {
            ans.push_back(elem.second);
        }
        return ans;
    }
};