//
// Created by bokket on 2021/2/11.
//
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col=matrix[0].size();//列
        int row=matrix.size();//行
        int left=0;
        int right=col*row-1;

        if(matrix.empty())
            return false;

        while(left<=right)
        {
            int mid=left+(right-left)/2;
            int mid_=matrix[mid/col][mid%col];
            if(mid_==target)
                return true;
            else if(mid_>target)
                right=mid-1;
            else
                left=mid+1;
        }
        return false;
    }
};

class Solution {
public:
    bool searchMatrix(vector <vector<int>> &matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==target)
                    return true;
            }
        }
        return false;
    }
}