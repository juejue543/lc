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
class Solution {
public:

    void insert(int data, ListNode* head){
    ListNode* n = new ListNode();
   
    n->val = data;
    if (head ==  NULL){
        head = n;
        n->next = NULL;
        n->val = data;
    }
    else{
        ListNode *temp = NULL;
        temp = new ListNode();
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        n->next = NULL;
}}
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>temp;
        while(list1 != NULL){
            temp.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2!= NULL){
            temp.push_back(list2->val);
            list2 = list2->next;
        }

        sort(temp.begin(), temp.end());

        ListNode* ans = NULL;
        ans = new ListNode();
        for(int i = 0; i< temp.size(); i++){
            insert(temp[i], ans);
        }

        return ans->next;





        
    }
};
