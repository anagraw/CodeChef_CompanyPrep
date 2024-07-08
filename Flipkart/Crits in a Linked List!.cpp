int solve(Node* head){
    if(head == nullptr || head->next == nullptr || head->next->next == nullptr) 
        return 0; 

    Node* prev = head; 
    Node* curr = head->next; 
    int cnt = 0; 

    while(curr->next != nullptr){
        Node* after = curr->next; 
        if ((curr->data > prev->data && curr->data > after->data) || 
            (curr->data < prev->data && curr->data < after->data)){
            cnt++; 
        }
        prev = curr; 
        curr = after; 
    }
    return cnt; 
}
