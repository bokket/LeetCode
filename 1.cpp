//
// Created by bokket on 2021/1/20.
//
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> n;
        //sort(nums.begin(),nums.end());
        for(auto i=0;i<nums.size();i++)
        {
            for(auto j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    n.push_back(i);
                    n.push_back(j);
                    return n;
                }
            }
        }
        return n;
};