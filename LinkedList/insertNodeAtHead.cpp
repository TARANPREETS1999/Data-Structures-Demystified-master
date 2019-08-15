//Insert node at head 

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
  SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
  temp->data = data;
  temp->next=llist;
  llist = temp;
  return(llist);
}
