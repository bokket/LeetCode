//
// Created by bokket on 2021/2/9.
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <algorithm>
#include <list>;
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *res=new ListNode();
        ListNode *cur=res;
        while(l1!= nullptr && l2 != nullptr)
        {
            if (l1->val <= l2->val)
            {
                cur->next=l1;
                l1=l1->next;
            }
            else
            {
                cur->next=l2;
                l2=l2->next;
            }
            cur=cur->next;
        }
        if(l1== nullptr)
            cur->next=l2;
        if(l2== nullptr)
            cur->next=l1;
        return res->next;
    }
};
//iteration


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr )
            return l2;
        if(l2==nullptr)
            return l1;

        if(l1->val<=l2->val)
        {
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
        else
        {
            l2->next=mergeTwoLists(l1,l2->next);
            return l2;
        }
    }
}