//Merge two sorted LinkedList
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if (head1==NULL && head2==NULL) return NULL;
    else if (head1==NULL) return head2;
    else if (head2==NULL) return head1;


    if (head1->data<=head2->data){
        head1->next = mergeLists(head1->next,head2);
    }
    else if(head1->data>head2->data){
      SinglyLinkedListNode * temp = head2;
      head2 =head2->next;
      temp->next =head1;
      head1 = temp;
      head1->next = mergeLists(head1->next, head2);
    }

    return head1;

}
/* Input : LL1  4 5 6
           LL2  2 3 10
   Output: 2 3 4 5 6 10
*/
