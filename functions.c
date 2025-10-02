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

    // Save transaction
    if (*trans_count < 10){ // last 10 transactions
        snprintf(transactions[*trans_count], 50, "Deposited %.2f", amount);
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

    // Save transaction
    if (*trans_count < 10){
        snprintf(transactions[*trans_count], 50, "Withdrew %.2f", amount);
        (*trans_count)++;
    }

    return balance;
}

void view_transactions(char transactions[][50], int trans_count){
    printf("\n--- Transaction Log ---\n");
    if (trans_count == 0){
        printf("No transactions yet.\n");
        return;
    }
    for (int i = 0; i < trans_count; i++){
        printf("%d. %s\n", i + 1, transactions[i]);
    }
}

