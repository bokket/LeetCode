//
// Created by bokket on 2021/2/9.
//

#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty() )
            return 0;
        int left=0;
        int right=nums.size()-1;

        while(left<right)
        {
            while(left<right && nums[left]!=val)
            {
                left+=1;
            }
            while(left<right && nums[right]==val)
            {
                right-=1;
            }
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
        }
        if(nums[left]==val)
            return left;
        else
            return left+1;
    }
};