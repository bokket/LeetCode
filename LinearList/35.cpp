//
// Created by bokket on 2021/2/9.
//

#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=target)
                return i;
        }
        return nums.size();
    }
};


class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            int mid=(left+right)/2;
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
                right=mid;
            if(nums[mid]<target)
                left=mid+1;
        }
        if(nums[left]>=target)
            return left;
        else
            return left+1;
    }
}