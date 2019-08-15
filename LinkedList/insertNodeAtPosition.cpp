//Insert node at  specific location 
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temp1 = new SinglyLinkedListNode(data);
    temp1->next = NULL;
    if (position==0){
        temp1->next = head;
        head = temp1;
        return head;
    }
    SinglyLinkedListNode * temp2 = head;
    for(int i=0;i<position-1;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next= temp1;
    return head;

}
