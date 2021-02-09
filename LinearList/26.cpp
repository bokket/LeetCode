//
// Created by bokket on 2021/2/9.
//
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        auto it=unique(nums.begin(),nums.end())-nums.begin();
        return it;
    }
}

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int i=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};