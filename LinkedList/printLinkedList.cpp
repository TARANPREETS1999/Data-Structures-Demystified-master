// Function to print LinkedList
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;     //or  cout<<(*temp).data<<endl;
        temp=temp->next;
    }


}
