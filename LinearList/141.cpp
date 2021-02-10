//
// Created by bokket on 2021/2/10.
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <algorithm>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head== nullptr )
            return false;
        ListNode* s=head;
        ListNode* f=head;
        while(f!= nullptr && f->next!= nullptr)
        {
            s=s->next;
            f=f->next->next;
            if(s==f)
                return true;
        }
        return false;
    }
};