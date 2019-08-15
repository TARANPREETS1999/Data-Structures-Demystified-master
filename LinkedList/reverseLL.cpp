// Reverse a LinkedList
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* p=head;
    if (p->next == NULL){
        head = p;
        return head;
    }
    SinglyLinkedListNode* q=reverse(p->next);
    p->next->next =p;
    p->next = NULL;
    return q;

}
