#include <stdio.h>
#include<stdlib.h>
#define MAX 50

char stack[MAX];
int top = -1;

void push(char item) {
    top++;
    stack[top] = item;
}

char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x) {
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/' || x == '%')
        return 2;
    return 0;
}

int isOperand(char ch) {
    if (ch >= '0' && ch <= '9')
        return 1;
    else
        return 0;
}

int main() {
    char infix[MAX];
    char ch, x;
    int i = 0;
    
    printf("Enter expression: ");
    scanf("%s", infix);

    while ((ch = infix[i++]) != '\0') {
        if (isOperand(ch))
            printf("%c", ch);
        else if (ch == '(')
            push(ch);
        else if (ch == ')') {
            while ((x = pop()) != '(')
                printf("%c", x);
        } else {
            while (top != -1 && priority(ch) <= priority(stack[top]))
                printf("%c", pop());
            push(ch);
        }
    }

    while (top != -1)
        printf("%c", pop());

    return 0;
}
