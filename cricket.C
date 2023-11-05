#include <stdio.h>

long int amount = 5000, deposit, withdraw;
int choice, pin;
char transaction;

int main() {
    
    

    
    while (pin != 1234) {
        printf("ENTER YOUR SECRET PIN NUMBER: ");
        scanf("%d", &pin);
        if (pin != 1234)
            printf("PLEASE ENTER A VALID PIN\n");
    }

    do {
        printf("********Welcome to ATM Service**************\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("******************?**************************?*\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYOUR BALANCE IN Rs : %lu\n", amount);
                break;
            case 2:
                printf("\nENTER THE AMOUNT TO WITHDRAW: ");
                scanf("%lu", &withdraw);
                if (withdraw <= amount) {
                    amount = amount - withdraw;
                    printf("The amount %lu has been withdrawn.\nYour new balance is %lu\n", withdraw, amount);
                } else {
                    printf("Insufficient balance. Transaction canceled.\n");
                }
                break;
            case 3:
                printf("\nENTER THE AMOUNT TO DEPOSIT: ");
                scanf("%lu", &deposit);
                amount = amount + deposit;
                printf("YOUR BALANCE IS %lu\n", amount);
                break;
            case 4:
                printf("\nTHANK YOU FOR USING ATM\n");
                break;
            default:
                printf("\nINVALID CHOICE\n");
        }
    } while (choice != 4);

    return 0;
}