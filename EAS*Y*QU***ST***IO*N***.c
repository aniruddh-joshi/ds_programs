#include<stdio.h>
#define N 10
char stack[N];
int top=-1;
int i;
void push(char elem)
{
    if(top==N-1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top]=elem;
}
char pop(){
    if (top==-1)
    {
        printf("Stack Underflow\n");
        return 0;
    }
    return stack[top--];
}
int main()
{
    char sequence[]="EAS*Y*QUE***ST***IO*N***";
    printf("Sequence:- %s\n",sequence);
    char popped[15];
    int j=0;
    for(i=0;sequence[i]!='\0';i++)
    {
        if(sequence[i]=='*') popped[j++]=pop();
        else push(sequence[i]);
    }
    popped[j]='\0';
    printf("\nPopped Sequence:- %s",popped);
    return 0;
}
