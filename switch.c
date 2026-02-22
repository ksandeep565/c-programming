#include<stdio.h>

int main()
{
    int week;

    printf("\nEnter the week number (1-7): ");
    scanf("%d", &week);

    switch(week)
    {
        case 1:
            printf("\nMonday");
            break;

        case 2:
            printf("\nTuesday");
            break;

        case 3:
            printf("\nWednesday");
            break;

        case 4:
            printf("\nThursday");
            break;

        case 5:
            printf("\nFriday");
            break;

        case 6:
            printf("\nSaturday");
            break;

        case 7:
            printf("\nSunday");
            break;

        default:
            printf("\nInvalid input! Please enter a week number between 1-7.");
    }

    return 0;
}
