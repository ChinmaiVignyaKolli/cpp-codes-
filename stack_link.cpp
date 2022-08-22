#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*head;


void push(){
	struct node *newnode,*t;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->next=NULL;
	printf("Enter Data:");
	scanf("%d",&newnode->data);
	t=head->next;
	if(head->next==NULL){
		head->next=newnode;
	}
	else{
		newnode->next=head->next;
		head->next=newnode;
	}
}

void pop(){
	if(head->next==NULL){
		printf("Stack is empty\n");
		return;
	}
	else{
		head->next=head->next->next;
	}
}

void disp(){
	struct node *c=head->next;
	while(c!=NULL){
		printf("%d-->",c->data);
		c=c->next;
	}
	printf("\n");
}

int main(void){
	head=(struct node *)malloc(sizeof(struct node));
	head->next=NULL;
	int opt,ch;
	do{
		printf("1.Push\n2.Pop\n3.Status\n4.Display\nEnter the option : ");
		scanf("%d",&opt);
		if(opt==1)
			push();
		if(opt==2)
			pop();
		if(opt==4)
			disp();
		printf("Continue?");
		scanf("%d",&ch);
	}while(ch!=0);
	return 0;
}
