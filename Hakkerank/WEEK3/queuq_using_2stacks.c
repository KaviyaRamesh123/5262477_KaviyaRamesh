#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
typedef struct
{
  int arr[MAX];
  int top;  
}stack;

void init(stack* s)
{
    s->top=-1;
}
int isempty(stack* s)
{
    return s->top==-1;
}
void push(stack* s,int x)
{
    s->arr[++(s->top)]=x;
}
int pop(stack* s)
{
    return s->arr[(s->top)--];
}
int peek(stack* s)
{
    return s->arr[s->top];
}

int main() {
    int q;
    scanf("%d",&q);
    stack s1,s2;
    init (&s1);
    init (&s2);
    while(q--)
    {
        int type;
        scanf("%d",&type);
        if(type==1)
        {
            int x;
            scanf("%d",&x);
            push(&s1,x);
        }
        else if(type==2)
        {
            if(isempty(&s2))
            {
                while(!isempty(&s1))
                {
                    push(&s2,pop(&s1));
                }
            }
            if(!isempty(&s2))
            {
                pop(&s2);
            }
        }
        else if(type==3)
        {
            if(isempty(&s2))
            {
                while(!isempty(&s1))
                {
                    push(&s2,pop(&s1));
                }
            }
            if(!isempty(&s2))
            {
                printf("%d\n",peek(&s2));
            }
        }
    }   
    return 0;
}

