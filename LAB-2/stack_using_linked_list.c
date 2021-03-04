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
        if(head!=NULL)
	        head = head->next;
        else
                printf("Underflow\n");  
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
		printf("%d\n",head->data);
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
	push(11);
	push(5);
	display();
	pop();
	isempty();
	pop();
	display();
	isempty();
}
