//
// Created by bokket on 2021/1/21.
//
#include <functional>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//当l1或者l2不为空
//计算n1 n2
//计算sum
//如果头为空 new一个节点
//如果头不为空 new一个tail->next节点
//尾插
//num保存进位的数
//判断l1和l2是否为空
//如果num大于0，则进位
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode *head= nullptr,*tail= nullptr;
        int num=0;
        while(l1 || l2)
        {
            int n1=l1 ? l1->val: 0;
            int n2=l2 ? l2->val: 0;

            int sum=n1+n2+num;

            if(head== nullptr)
                head=tail=new ListNode(sum%10);
            else
            {
                tail->next=new ListNode(sum%10);
                tail=tail->next;
            }

            num=sum/10;

            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
        if(num>0)
            tail->next=new ListNode(num);
        return head;
    }
};
