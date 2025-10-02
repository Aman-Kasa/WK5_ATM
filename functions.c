#include <stdio.h>
#include <string.h>

void check_balance(float balance){
    printf("Your current balance is %.2f\n", balance);
}

float deposit(float balance, char transactions[][50], int *trans_count){
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);

    if (amount < 1){
        printf("Deposit must be at least 1.\n");
        return balance;
    }

    balance += amount;
    printf("Successfully deposited %.2f. New balance: %.2f\n", amount, balance);

    // Save transaction with balance
    if (*trans_count < 10){ // keep last 10 transactions
        snprintf(transactions[*trans_count], 50, "Deposited %.2f | %.2f", amount, balance);
        (*trans_count)++;
    }
    return balance;
}

float withdraw(float balance, char transactions[][50], int *trans_count){
    float amount;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    if (amount < 1){
        printf("Withdrawal must be at least 1.\n");
        return balance;
    } else if (amount > balance){
        printf("Insufficient funds. Current balance: %.2f\n", balance);
        return balance;
    }

    balance -= amount;
    printf("Successfully withdrew %.2f. New balance: %.2f\n", amount, balance);

    // Save transaction with balance
    if (*trans_count < 10){
        snprintf(transactions[*trans_count], 50, "Withdrew %.2f | %.2f", amount, balance);
        (*trans_count)++;
    }

    return balance;
}

void view_transactions(char transactions[][50], int trans_count){
    printf("\n=== Transaction Log ===\n");

    if (trans_count == 0){
        printf("No transactions yet.\n");
        return;
    }

    // Print table header
    printf("%-5s %-20s %-10s\n", "No.", "Transaction", "Balance");
    printf("----------------------------------------\n");

    // Print each transaction
    for (int i = 0; i < trans_count; i++){
        char action[20];
        float bal;
        sscanf(transactions[i], "%19[^|]|%f", action, &bal); // split "Deposited 100 | 500"
        printf("%-5d %-20s %-10.2f\n", i + 1, action, bal);
    }
}

