#include <stdio.h>
int main() {
    int day;
    printf("Enter day number (1 to 7): ");
    scanf("%d", &day);
    while(day>7)
    {
        printf("Invalid input! Going back to\n");
        printf("Again enter day number:");
        scanf("%d",&day);
    }
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
}
    return 0;
}
