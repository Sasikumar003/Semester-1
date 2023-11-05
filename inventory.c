#include <stdio.h>

int main()
{
    int N;
    printf("Enter the number of items: ");
    scanf("%d", &N);

    int stocks[N + 1];
    printf("Enter the initial stock of all items:\n");
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &stocks[i]);
    }

    int choice, PRODUCTID, amount;
    int totalStock = 0;

    do
    {
        printf("Menu:\n");
        printf("1. Add stock\n");
        printf("2. Remove stock\n");
        printf("3. Check balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Add stock
            printf("Enter item ID: ");
            scanf("%d", &PRODUCTID);
            if (PRODUCTID < 0 || PRODUCTID >= N)
            {
                printf("Invalid item ID\n");
                break;
            }
            printf("Enter the amount to add: ");
            scanf("%d", &amount);
            if (totalStock + amount <= 500)
            {
                stocks[PRODUCTID] += amount;
                totalStock += amount;

                printf("The %d amount is added to the product ID %d. The new stock is %d.\n", amount, PRODUCTID, stocks[PRODUCTID]);
            }
            else
            {
                printf("Cannot add more stock, cumulative count exceeds 500.\n");
            }
            break;

        case 2: // Remove stock
            printf("Enter item ID: ");
            scanf("%d", &PRODUCTID);
            if (PRODUCTID < 0 || PRODUCTID >= N)
            {
                printf("Invalid item ID\n");
                break;
            }
            printf("Enter the amount to remove: ");
            scanf("%d", &amount);
            if (stocks[PRODUCTID] >= amount)
            {
                stocks[PRODUCTID] -= amount;
                totalStock -= amount;
                printf("The %d amount is removed from the product ID %d. The new stock is %d.\n", amount, PRODUCTID, stocks[PRODUCTID]);
            }
            else
            {
                printf("Cannot remove more stock, stock is very low.\n");
            }
            break;

        case 3: // Check balance
            printf("Enter item ID: ");
            scanf("%d", &PRODUCTID);
            if (PRODUCTID < 0 || PRODUCTID >= N)
            {
                printf("Invalid item ID\n");
            }
            else
            {
                printf("The stock of the product ID %d is %d.\n", PRODUCTID, stocks[PRODUCTID]);
            }
            break;

        case 4: // Exit
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option (1-4).\n");
        }

    } while (choice != 4);

    return 0;
}
