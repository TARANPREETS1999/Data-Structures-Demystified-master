//Array Implementation Of Stack
#include <stdio.h>
#define MAX_SIZE 100

int a[MAX_SIZE], top = -1;

void PUSH(int x){
	if (top==MAX_SIZE-1){
		printf("Error: Stack Overflow\n");
		return;
	}
	a[++top]=x;
}

void POP(){
	if (top==-1){
		printf("Error: Stack Underflow\n");
		return;
	}
	top--;
}

void TOP(){
	printf("Top of Stack = %d\n",a[top]);
	return;
}

bool isEmpty(){
	if (top==-1) return true;
	else return false;
}

void print(){
	printf("Stack now is: ");
	for(int i=0;i<=top;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return;
}

int main(){
	PUSH(3);print();
	PUSH(10);print();
	POP();print();
	PUSH(24);print();
	PUSH(55);print();
	TOP();
}
/*
Output:
Stack now is: 3
Stack now is: 3 10
Stack now is: 3
Stack now is: 3 24
Stack now is: 3 24 55
Top of Stack = 55
*/

