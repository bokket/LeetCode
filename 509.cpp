//
// Created by bokket on 2020/12/14.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int fib(int N)
    {
        if(N<1)
            return 0;
        vector<int> memory(N+1,0);
        return helper(memory,N);
    }
    int helper(vector<int>& memory,int N)
    {
        if(N==1 || N==2)
            return 1;
        if(N==0)
            return 0;
        if(memory[N]!=0)
        {
            return memory[N];
        }
        memory[N]=helper(memory,N-1)+helper(memory,N+1);
        return memory[N];

    }

};