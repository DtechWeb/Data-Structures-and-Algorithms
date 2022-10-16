class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int size=0;
        ListNode* p=head;
        while(p!=NULL){
            p=p->next;
            size+=1;
        }
        
        stack<int> List;
        p=head;
        
        for(int n=0;n<size/2;n++){
            List.push(p->val);
            p=p->next;
        }
        if(size%2==1) p=p->next;
        
        while(!List.empty()){
            if(p->val!=List.top()) return false;
            p=p->next;
            List.pop();
        }
        
        return true;
    }
};
