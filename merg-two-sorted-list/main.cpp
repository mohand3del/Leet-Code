

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr){
            return list2;
        }
        if(list2 == nullptr){
            return list1;
        }
        //ListNode*head;
          ListNode* ans =new ListNode(-1);
          ListNode* head = ans;
        
            //ListNode*ans = head;
            while(list1 != nullptr && list2 != nullptr){
                if(list1->val <= list2->val){
                    head -> next = list1;
                    list1 = list1->next;
                }else{
                      head -> next = list2;
                      list2 = list2->next;
                }
                head = head->next;

            }
            while(list1){
            head->next = list1;
                head=head->next;
                list1 =list1->next;

        } 

        while(list2){
           head->next = list2;
                head=head->next;
                list2 =list2->next;

        }
        
        return ans->next;
    }
};