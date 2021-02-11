//
// Created by bokket on 2021/2/11.
//
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {

    }
}



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                res=max(res,sum);
            }
        }
        return res;
    }
};