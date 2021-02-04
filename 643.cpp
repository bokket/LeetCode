//
// Created by bokket on 2021/2/4.
//
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double ans=0;
        for(int i=0;i<k;i++)
            sum+=nums[i];

        ans=max(ans,sum/k);
        for(int i=k;i<nums.size();i++)
        {
            sum=sum+nums[i]-nums[i-k];
            ans=max(ans,sum/k);
        }
        return ans;
    }
};