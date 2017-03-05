#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
struct stack{
	node *top;
};
stack *create_stack()
{
    stack *s = new stack;
    s->top=NULL;
    cout<<"                                               STACK CREATED"<<endl;
    return s;
}
void push(stack *s,int data)
{
	node *temp =new node;
	temp->info=data;
	temp->next=s->top;
	s->top=temp;
}
int pop(stack *s)
{
	node *temp = new node;
	temp=s->top;
	if(temp==NULL)
	{
		cout<<"STACK IS EMPTY , NO ELEMENTS TO POP"<<endl;
	    return 9451;
     }
	cout<<"POPPED VALUE: "<<temp->info<<endl;
	s->top=temp->next;
	if(s->top==NULL) return 9415;
	return s->top->info;
	
}
bool is_empty(stack *s)
{
    if (s->top == NULL)
        return true;
    else
    return false;
}
void display(stack *s)
{
	node *temp= new node;
    temp = s->top;
 
    if (temp == NULL)
    {
        cout<<"STACK IS EMPTY"<<endl;
        return;
    }
 cout<<"THE STACK IS     ";
     while (temp != NULL)
    {
        cout<<temp->info<<"     ";
        temp = temp->next;
    }
    cout<<endl;
 }
 void empty_stack(stack *s)
 {
 	s->top=NULL;
 	cout<<"THE STACK IS EMPTY NOW"<<endl;
 }
 void free_stack(stack *s)
 {
 	node *temp=new node;
 	while(s->top!=NULL)
 	{
 		temp=s->top;
 		s->top=s->top->next;
 		delete(temp);
	 }
 	cout<<"STACK IS FREE NOW"<<endl;
 }
