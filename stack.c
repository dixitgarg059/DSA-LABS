#include<stdio.h>
#include<stdlib.h>

// push, pop, top, display, empty 

struct node {
	int data;
	struct node* next;
};

struct node * head;

void push(int val) //1
{
	struct node * temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = val;
	temp -> next = head;
	head = temp;
}

void pop()
{
	head = head->next;
}

int top()
{
	if(head==NULL)
	{
		printf("Underflow\n");
		return -1;
	}
	else
		return head->data;
}

void display()
{
	struct node* walk = head;
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head = head->next;
	}
	head = walk;
}
void isempty()
{
	if(head==NULL)
	{
		printf("Stack is empty\n");
	}
	else
		printf("Stack not empty\n");
}
int main()
{
	// int n;
	// scanf("%d", &n);
	// for(int i=0;i<n;i++)
	// {
	// 	int b,c;
	// 	scanf("%d", &b);
	// 	if(b==1)
	// 		//push

	// }
	push(11);
	push(5);
	display();
	pop();
	isempty();
	pop();
	display();
	isempty();
}
