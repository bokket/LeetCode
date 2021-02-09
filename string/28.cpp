//
// Created by bokket on 2021/2/6.
//
#include <stack>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c:s)
        {
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else
            {
                if(st.empty())
                    return false;
                if (c == ')' && st.top() == '(' )
                    st.pop();
                else if(c == '}' && st.top() == '{')
                    st.pop();
                else if(c == ']' && st.top() == '[')
                    st.pop();
                else
                    return false;
                //|| c == '}' && st.top() == '{' || c == ']' && st.top() == '['
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};