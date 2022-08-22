#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 10

int stack[MAXSIZE];
int top=-1;

void push(){
	int data;
	if(top>=MAXSIZE-1){
		printf("Stack is Full\n");
		return;
	}
	else{
		top++;
		scanf("%d",&data);
		stack[top]=data;
	}
	return;
}

void pop(){
	if(top<0){
		printf("Stack is Empty\n");
		return;
	}
	else{
		top--;
	}
	return;
}

void display(){
	int i;
	if(top<0){
		printf("Stack is empty\n");
		return;
	}
	for(i=0;i<=top;i++)
		printf("%d\t",stack[i]);
	printf("\n");
}

void status(){
	if(top<0){
		printf("Stack is Empty\n");
	}	
	if(top>=MAXSIZE-1)
		printf("Stack is full\n");
	else
		printf("%.2f  free space\n",(float)(MAXSIZE-1-top)*100/MAXSIZE);
}

int main(){
	int opt,ch;
	do{
		printf("1.Push\n2.Pop\n3.Status\n4.Display\nEnter the option : ");
		scanf("%d",&opt);
		if(opt==1)
			push();
		if(opt==2)
			pop();
		if(opt==3)
			status();
		if(opt==4)
			display();
		printf("Continue?");
		scanf("%d",&ch);
	}while(ch!=0);
	return 0;
}


