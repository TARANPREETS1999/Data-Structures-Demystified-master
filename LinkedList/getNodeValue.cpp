//Getting Node value from tail
/* Approach : To get the nth node from the tail of the linked list, we can calculate the length of the 
entire list by traversing the list once. Let this length be l. nth node from the tail is the (l-n-1)th
node from the start (everything is 0-based) Or we can use two pointers. We can increment one of these
to point to the nth node from the start and then increment both of these simultaneously till the 
first node reaches the end of the list. The second node points to the nth node from the tail. 
*/
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *current = head;
    SinglyLinkedListNode *result = head;
    int count =0;
    while (current!=NULL and count<positionFromTail){
        current=current->next;
        count++;
    }
    while (current->next!=NULL){
        current=current->next;
        result = result->next;
    }
     return (result->data);
}
