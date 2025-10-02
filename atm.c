#include <stdio.h>
#include "login.h"
#include "functions.h"

int main() {
    float balances[3] = {1000, 500, 1200}; // initial balances
    char transactions[3][10][50]; // 3 users, 10 transactions max, each 50 chars
    int trans_count[3] = {0,0,0}; // count of transactions per user

    int userIndex = login();
    if (userIndex == -1){
        printf("Exiting program.\n");
        return 0;
    }

    int choice;
    while (1){
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. View Transaction Log\n");
        printf("5. Log Out\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                check_balance(balances[userIndex]);
                break;
            case 2:
                balances[userIndex] = deposit(balances[userIndex], transactions[userIndex], &trans_count[userIndex]);
                break;
            case 3:
                balances[userIndex] = withdraw(balances[userIndex], transactions[userIndex], &trans_count[userIndex]);
                break;
            case 4:
                view_transactions(transactions[userIndex], trans_count[userIndex]);
                break;
            case 5:
                printf("Logging out...\n");
                userIndex = login(); // allow another user to log in
                if (userIndex == -1){
                    printf("Exiting program.\n");
                    return 0;
                }
                break;
            default:
                printf("Invalid option, try again.\n");
        }
    }
}

