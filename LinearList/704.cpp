//
// Created by bokket on 2021/2/11.
//
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;

        if(nums.size()==0)
            return -1;

        while(left<=right)
        {
            int mid=(right+left)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
            {
                right=mid-1;
            }
            if(nums[mid]<target)
            {
                left=mid+1;
            }
        }
        return -1;
    }
};