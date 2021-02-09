//
// Created by bokket on 2021/1/20.
//
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
    }
};

-1 -2 -3 1 2 3
