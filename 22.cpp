//
// Created by bokket on 2021/2/9.
//

#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtracking(n,res,0,0,"");
        return res;
    }
    void backtracking(int n,vector<string>& res,int left,int right,string str)
    {
        if(left<right )
            return ;
        if(left==right&& left==n)
        {
            res.push_back(str);
            return ;
        }
        //左括号
        if(left<n)
            backtracking(n,res,left+1,right,str+"(");
        //右括号
        if(left>right)
            backtracking(n,res,left,right+1,str+")");
    }
};