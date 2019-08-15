// Function to Reverse a LinkedList Using stack from STL

void Reverse(){
	if (head==NULL) return;
	stack<struct *Node> S;
	Node *temp = head;
	while(temp!=NULL){
		S.push(temp);
		temp=temp->next;
	}
	temp=S.top();
	head = temp;
	S.pop();
	while(!S.empty()){
		temp->next = S.top();
		S.pop();
		temp = temp->next;
	}
	temp->next = NULL;
}
