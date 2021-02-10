//
// Created by bokket on 2021/2/10.
//
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int cnt=0;
        int left=0;
        int right=people.size()-1;
        sort(people.begin(),people.end());

        while(left<=right)
        {
            if(people[left]+people[right]<=limit)
            {
                left++;
            }
            right--;
            cnt++;
        }
        return cnt;
    }
};
