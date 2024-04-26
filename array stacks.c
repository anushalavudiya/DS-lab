#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int stack[MAX],top=-1;
void push(int);
void pop();
void display();
int main()
{	
	int choice,item;
	while(1)
	{
		printf("\nMENU\n");
		printf("1.push\n2.pop\n3.display\n4.exit\n");
		printf("enter choice:");
		scanf("%d",&choice);
			switch(choice)
			{
				case 1: printf("enter element to push:");
							scanf("%d",&item);
							 push(item);
							 break;
				case 2: pop();
				              break;
				case 3: display();
				              break;
				case 4:exit(0);
				             break;
			  default : printf("invalid choice");
			  }
	}
}
 void push(int item)
 {
   	if(top==MAX-1)
   	    printf("stack overflow");
   	 else
   	 {
   	 	top++;
   	 	stack[top]=item;
   	 }
  }
  void pop()
  {
  int item;
     if(top==-1)
          printf("stack uderflow");
    else
      {
       	item=stack[top];
       	printf("popped element =%d",item);
       	top--;
      }
   }
   void display()
  {
   int i;
    	if(top==-1)
    	 	printf("stack empty");
    	else
    	{
    	 	for(i=top;i>=0;i--)
    	 	 {
    	 	  printf("%4d",stack[i]);
    	 	  }
    	 }
   }
    	 	  	 	 				             
				             
