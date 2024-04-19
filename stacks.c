
#include<stdlib.h>
#define MAX 100
char infix[MAX];
char postfix[MAX];
char stack[MAX];
int top=-1;
void push(void);
char pop(void);
int precedence(char);
void print(void);
int is mpty(void);
void infixtopostfix(void);
int main()
{
printf("enter the infix expression");
gets((infix);
infixtopostfix();
print();
}
void push(char x)
{
if(top==MAX-1)
{
printf("stack overflow");
exit(1);
}
top++
st
ack{top}=x;
}
char pop()
}
char c;
if(top==-1)
{
printf("stack underflow");
exit(1);
}
c=stack[top];
top--;
return c;
}
int precedence(char x)
{
if(x=='+'||x=='-')
return 1;
else if(x=='*'||x=='/');
return 2;
else if(x=='^')
return 3;
else
return 0;
}
void print()
{
int i;
for(i=0;postfix[i]!='10';i++)
printf("%c",postfix[i]);
return ;
}
int is empty()
{
if(top==-1)
return 1;
else
return 0;
}
void infixtopostfix()
{
int i,j=0;
char symbol,next;
for(i=0;infix[i]!='\0';i++)
{
symbol = infix[i];
if(symbol == '(')
push (symbol)
else if(symbol==')')
{
while((next=pop())!='(')
postfix[j++]=next;
}
else if (symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='^')
{
while(! is empty()&& precedence[stack[top]]>=precedence(symbol))
postfix[j++]=pop();
push(symbol);
}
else
postfix[j++]=symbol;
}
while(!is empty())
postfix[j++]=pop;();
postfix[j]='\0';
}































