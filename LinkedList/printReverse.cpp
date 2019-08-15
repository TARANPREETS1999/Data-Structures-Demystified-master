//Print LinkedList in reverse

void reversePrint(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head;
    if (temp==NULL){
        return;
    }
    reversePrint(temp->next);
    cout<<temp->data<<endl;


}
