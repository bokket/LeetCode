//
// Created by bokket on 2021/1/21.
//

#include <algorithm>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> hashset;
        int start=0,end=0,maxrt=0;
        while(end<s.size())
        {
            //如果尾指针没有关键字在set里面，就加到set
            if (hashset.find(s[end]) == hashset.end()) {
                hashset.insert(s[end]);
                end++;
            } else {
                hashset.erase(s[start]);
                start++;
            }
            maxrt = max(maxrt, end - start);
        }
        return maxrt;
    }
};