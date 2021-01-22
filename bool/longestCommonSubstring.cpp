//
// Created by bokket on 2021/1/23.
//

#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

int longestCommonSubstring(string& A,string& B)
{
    if(A.empty() || B.empty())
        return nullptr;

    int lcs=0;
    int lcs_temp=0;

    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<B.size();j++)
        {
            lcs_temp=0;

            while( (i+lcs_temp < A.size()) && (j+lcs_temp < B.size()) && ( A[i+lcs_temp]==B[j+lcs_temp]) )
                ++lcs_temp;

            if(lcs_temp>lcs)
                lcs=lcs_temp;
        }
    }
    return lcs;
}