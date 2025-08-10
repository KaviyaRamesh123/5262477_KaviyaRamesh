#include <stdio.h>
int main()
{
    char str[1001];
    int index;
    int alpha[26]={0};
    for(int i=0;i<sizeof(str);i++)
    {
        scanf("%c",&str[i]);
    }
    for(int i=0;str[i]!='\0';i++)
    {
       char ch=str[i];
       if(ch>='A'&&ch<='Z')
       {
        ch=ch+32;
       } 
       if(ch>='a'&&ch<='z')
       {
        index=ch-'a';
        alpha[index]=1;
       }
       
    }
    for(int i=0;i<26;i++)
    {
        if(alpha[i]==0)
        {
            printf("not pangram");
            return 0;
        }
    }
    printf("pangram");
    return 0;
}

