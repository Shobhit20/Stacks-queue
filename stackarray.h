#include<iostream>
using namespace std;
#define MAXSIZE 100
struct node{
	int stk[MAXSIZE];
	int top;
};
struct stack{
	node *stackT;
};

stack *create_stack()
{
    stack *s = new stack;
    s->stackT=new node;
    s->stackT->top=-1;
    cout<<"                                           STACK CREATED"<<endl;
    return s;
}
void push(stack *s,int no)
{
    if (s->stackT->top==MAXSIZE-1)
    {
    	cout<<"STACK IS FULL"<<endl;
	}
	s->stackT->top+=1;
	
    s->stackT->stk[s->stackT->top]=no;
}
int pop(stack *s)
{
	if(s->stackT->top==-1)
	{
		cout<<"STACK IS EMPTY,NO ELEMENTS TO POP"<<endl;
	    return 0;
     }
	cout<<"POPPED VALUE: "<<s->stackT->stk[s->stackT->top]<<endl;
	s->stackT->top=s->stackT->top-1;
	return s->stackT->stk[s->stackT->top];
}
bool is_empty(stack *s)
{
    if (s->stackT->top == -1)
        return true;
    else
    return false;
}
void display(stack *s)
{
	if(s->stackT->top==-1)
	{
		cout<<"NO ELEMENTS TO DISPLAY"<<endl;
		return;
	}
	else{
	cout<<"THE STACK IS     ";
	for(int i=0;i<=s->stackT->top;i++)
	{
		cout<<s->stackT->stk[i]<<"     ";
	}
	cout<<endl;
}
}
void empty_stack(stack *s){
	s->stackT->top=-1;
	cout<<"THE STACK IS FREE NOW"<<endl;
}
