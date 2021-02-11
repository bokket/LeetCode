//
// Created by bokket on 2021/2/11.
//
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        return getMax(nums,0,nums.size()-1);
    }
    int getMax(vector<int>& nums,int left,int right)
    {
        if(left==right)
            return nums[left];

        int mid=left+(right-left)/2;

        int leftMax=getMax(nums,left,mid);
        int rightMax=getMax(nums,mid+1,right);
        int midMax=getMidMax(nums,left,right);

        int res=max(leftMax,rightMax);
        res=max(res,midMax);
        return res;
    }

    int getMidMax(vector<int>& nums,int left,int right)
    {
        int mid=left+(right-left)/2;
        int leftSum=0;
        int leftMax=INT_MIN;

        for(int i=mid;i>=left;i--)
        {
            leftSum=leftSum+nums[i];
            leftMax=max(leftMax,leftSum);
        }

        int rightSum=nums[mid+1];
        int rightMax=0;
        for(int i=mid+1;i<=right;i++)
        {
            rightSum+=nums[i];
            rightMax=max(rightMax,rightSum);
        }

        return leftMax+rightMax;
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