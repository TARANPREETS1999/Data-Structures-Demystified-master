// Insert node at the tail of Linked List

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    temp->data=data;
    temp->next = NULL;
    if (head==NULL){
        head = temp;
    }
    else{
    SinglyLinkedListNode* temp1 = head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
    }
    return head;


}
