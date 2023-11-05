/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number of items: ");
    scanf("%d", &N);
    int totalStock = 0;
    int stocks[N + 1];
    printf("Enter the initial stock of all items:\n");
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &stocks[i]);
    }
    for (int i = 1; i <= N; i++)
    {
        totalStock = totalStock + stocks[i];
    }

    int choice, itemId, amount;

    do
    {
        printf("Menu:\n");
        printf("1. Add stock\n");
        printf("2. Remove stock\n");
        printf("3. Check balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice != 4)
        {
            printf("Enter item ID: ");
            scanf("%d", &itemId);
        }

        switch (choice)
        {
        case 1:

            if (itemId < 0 || itemId > N)
            {
                printf("Invalid item ID \n");
                break;
            }
            printf("Enter the amount to add: ");
            scanf("%d", &amount);
            if (totalStock + amount <= 500)
            {
                stocks[itemId] += amount;
                totalStock += amount;

                printf("The %d amount is added to the product ID %d. The new stock is %d.\n", amount, itemId, stocks[itemId]);
                printf("The total stock %d", totalStock);
            }
            else
            {
                printf("Cannot add more stock, cumulative count exceeds 500.\n");
            }
            break;

        case 2:

            if (itemId < 0 || itemId > N)
            {
                printf("Invalid item ID\n");
                break;
            }
            printf("Enter the amount to remove: ");
            scanf("%d", &amount);
            if (stocks[itemId] >= amount)
            {
                stocks[itemId] -= amount;
                totalStock -= amount;
                printf("The %d amount is removed from the product ID %d. The new stock is %d.\n", amount, itemId, stocks[itemId]);
                printf("The total stock %d", totalStock);
            }
            else
            {
                printf("Cannot remove more stock, stock is very low.\n");
            }
            break;

        case 3:

            if (itemId < 0 || itemId > N)
            {
                printf("Invalid item ID\n");
            }
            else
            {
                printf("The stock of the product ID %d is %d.\n", itemId, stocks[itemId]);
                printf("The total stock %d", totalStock);
            }
            break;

        case 4:
            printf("The total stock %d", totalStock);
            printf("Exiting the program.\n");

            break;

        default:
            printf("Invalid choice. Please enter a valid option (1-4).\n");
        }

    } while (choice != 4);

    return 0;
}
