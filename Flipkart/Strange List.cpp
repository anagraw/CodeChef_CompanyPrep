/*class Node
{
    public:
    int val;
    Node* next;
    Node* child;
    Node(int val)
    {
        next = child = NULL;
        this->val = val;
    }
};*/

Node* flatten(Node* head) {
    if(head== nullptr) return head; 
    Node* curr= head; 
    while(curr){
        if(curr->child){
            Node* nextnode= curr->next; 
            Node* childlist= flatten(curr->child); 
            
            curr->next= childlist; 
            curr->child= nullptr; 
            
            Node* currchild= childlist; 
            while(currchild->next){
                currchild= currchild->next; 
            }
            currchild->next= nextnode; 
        }
        else{
            curr= curr->next; 
        }
    }
    return head; 
    
}
