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
using namespace std;
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head== nullptr || head->next== nullptr)
            return head;
        ListNode* res=new ListNode();
        res->next=head;
        ListNode* cur=res;

        while(cur->next!= nullptr && cur->next->next!= nullptr)
        {
            ListNode* ntem=head->next;
            ListNode* temp=head->next->next;

            cur->next=ntem;
            ntem->next=head;
            head->next=temp;

            cur=head;
            head=head->next;
        }
        return res->next;
    }
};


class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if(head==nullptr || head->next==nullptr)
            return head;
        ListNode* temp=head->next;

        head->next=swapPairs(head->next->next);

        temp->next=head;

        return temp;
    }
}