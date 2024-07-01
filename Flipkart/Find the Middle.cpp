/*struct Node {
	int val;
	struct Node* next;
	Node(int x){
		val = x;
		next = NULL;
	}
};*/

int getMiddleElement(Node* head){
    auto fast= head; 
    while(fast!=nullptr && fast->next!= nullptr){
        fast= fast->next->next; 
        head= head->next; 
    }
    return head->val; 
}
