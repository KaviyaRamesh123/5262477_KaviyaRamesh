#include <stdio.h>
void timeConversion(char time[])
{
   int hour;
   hour=(time[0] -'0') * 10 + (time[1] - '0');
    if(time[8]=='A' && time[9]=='M')
    {
        if(hour==12)
        {
            time[0]='0';
            time[1]='0';
        }
    }
    else if(time[8]=='P' && time[9]=='M')
    {
        if(hour!=12)
        {
            hour=hour+12;
            time[0]=hour/10+'0';
            time[1]=hour%10+'0';
        }
    }
    for(int i=0;i<8;i++)
    {
        printf("%c",time[i]);
    }
}
int main()
{
    char time[11];
    scanf("%s",time);
    timeConversion(time);
    return 0;
}

