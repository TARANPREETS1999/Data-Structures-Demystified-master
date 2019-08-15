#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* link;
};
struct Node* top = NULL;

void POP(){
	struct Node* temp;
	if (top==NULL) return;
	temp =top;
	top=top->link;
	free(temp);
	return;
}
void PUSH(int x){
	struct Node* temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->link = top;
	top =temp;
	return;
}
bool isEmpty(){
	if (top==NULL) return 1;
	else return 0;
}
int TOP(){
	return (top->data);
}
void print(){
	struct Node * temp = top;
	printf("Stack now is: ");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("\n");
	return;
}

int main(){
	PUSH(10);print();
	PUSH(4);print();
	POP();print();
	PUSH(3);print();
	PUSH(5);print();
	PUSH(2);print();
	printf("Top of Stack is %d",TOP());
		
}

/*
Output:
Stack now is: 10
Stack now is: 4 10
Stack now is: 10
Stack now is: 3 10
Stack now is: 5 3 10
Stack now is: 2 5 3 10
Top of Stack is 2
*/
