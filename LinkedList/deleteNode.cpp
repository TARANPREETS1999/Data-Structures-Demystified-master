// Delete Node 

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* temp = head;
    cout<<position;
    if (position==0){
        head = temp->next;
        delete(temp);
        return head;
    }
    for(int i=0;i<position-1;i++){
        temp=temp->next;
    }
    SinglyLinkedListNode* temp1 = temp->next; //position
    temp->next = temp1->next;
    delete(temp1);
    return head;
    
}
