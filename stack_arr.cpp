#include"stackarray.h"
int main()
{
	int ch,no;
	stack *s=create_stack();

	 do{
 
    cout<<"                               press 1 to push an element in stack"<<endl;
    cout<<"                               press 2 to pop an element from stack"<<endl;
    cout<<"                               press 3 to check if stack is empty"<<endl;
    cout<<"                               press 4 to display the stack"<<endl;
    cout<<"                               press 5 to empty stack"<<endl;
    cout<<"                               press 6 to exit"<<endl;
    
    cout<<"ENTER CHOICE: ";
    cin>>ch;
 
        switch (ch)
        {
        case 1:
	        cout<<"ENTER DATA: ";
            cin>>no;
            push(s,no);
            break;
        case 2:
            pop(s);
            cout<<"NEW VALUE AT TOP IS "<<s->stackT->stk[s->stackT->top]<<endl;
            break;
        case 3:
            if(is_empty(s))cout<<"STACK IS EMPTY"<<endl;
            else
            {
            	cout<<"STACK NOT EMPTY"<<endl;
			}
            break;
        case 4:
            display(s);
            break;
        case 5:
        	empty_stack(s);
        	break;
        case 6:
            exit(0);
        default :
            cout<<"Wrong choice, Please enter correct choice";
            break;
        }
    }while(ch>0);
}

