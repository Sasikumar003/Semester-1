#include <stdio.h>
void main()
{
    int days = 0;
    int present = 0, absent = 0, late = 0, od = 0;
    printf("Enter the total number of days: ");
    scanf("%d", &days);
    char input[days];
    printf("Enter P Present, O for OD, A for Absent and L for Late  ");
    for (int i = 0; i < days; i++)
    {
        printf("\nDay %d :", i + 1);
        scanf(" %c", &input[i]);
    }

    for (int i = 0; i < days; i++)
    {
        if (input[i] == 'P' || input[i] == 'O')
        {
            present++;
            if (input[i] == 'O')
            {
                od++;
            }
        }
        else if (input[i] == 'A')
        {
            absent++;
        }
        else
        {
            late++;
        }
    }
    if (late % 2 == 0)
    {
        present = present + (late / 2);
        absent = absent + (late / 2);
    }
    else
    {
        present = present + (late / 2);
        absent = absent + (late / 2) + 1;
    }

    printf("Total Present: %d", present);
    printf("Total Absent: %d", absent);
    printf("Total Late: %d", late);
    printf("Total On Duty: %d", od);
    int ap = present * 100 / days;
    printf("Attendance Perncentage: %d", ap);
}
