#include <stdio.h>
#include <string.h>
#define MAX 1000

typedef struct
{
    char arr[MAX];
    int top;
}stack;
void init(stack* st)
{
    st->top=-1;
}
int isempty(stack* st)
{
    return st->top==-1;
}
void push(stack* st,char ch)
{
    st->arr[++(st->top)]=ch;
}
int pop(stack* st)
{
    return st->arr[(st->top)--];
}
int peek(stack* st)
{
    return st->arr[st->top];
}
int ismatching(char open,char close)
{
    return (open=='{' &&close=='}')||
    (open=='(' &&close==')')||
    (open=='[' &&close==']');  
}
char* isBalanced(char s[])
{
    stack st;
    init(&st);
    for(int i=0;i<strlen(s);i++)
    {
        char ch=s[i];
        if(ch=='{'||ch=='('||ch=='[')
        {
            push(&st,ch);
        }
        else
        {
            if(isempty(&st))
            {
                return "NO";
            }
            char top=pop(&st);
            if(!ismatching(top,ch))
                return "NO";
        }
    }
    if(isempty(&st))
    {
        return "YES";
    }
    else 
    {
        return "NO"; 
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char s[MAX];
        scanf("%s",s);
        printf("%s\n",isBalanced(s));
    }
    return 0;
}
