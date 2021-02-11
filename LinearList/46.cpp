//
// Created by bokket on 2021/2/11.
//

#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> visited(nums.size(), false);

        backtracking(nums,visited);

        return res;
    }

    void backtracking(vector<int>& nums,vector<bool>& visited)
    {
        if(nums.size()==path.size())
        {
            res.push_back(path);
            return ;
        }


        for(int i=0;i<nums.size();i++)
        {
            if(visited[i]==true)
                continue;
            visited[i]=true;
            path.push_back(nums[i]);

            backtracking(nums,visited);

            path.pop_back();
            visited[i]=false;
        }
    }
};