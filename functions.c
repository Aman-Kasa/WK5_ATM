#include <stdio.h>


float balance, withdrawal_amount, deposit_amount;

void check_balance(float balance){
  printf("Your current balance is %.2f\n", balance);
}

float deposit(float balance){
  float deposit_amount;
  printf("Please enter the amount you would like to deposit into your account:\n");
  scanf("%f", &deposit_amount);
  if (deposit_amount < 1){
    printf("Sorry, you cannot deposit an amount less than 1. Please try again\n");
    return balance;
  }
  else{
    printf("Depositing %.2f into your account...\n", deposit_amount);
    balance = balance + deposit_amount;
    printf("Successfully deposited %.2f into your account.\n", deposit_amount);
    return balance;
  }
}
float withdraw(float balance){
  float withdrawal_amount;
  printf("Please enter the amount you would like to withdraw from account\n");
  scanf("%f", &withdrawal_amount);

  if (withdrawal_amount > balance){
    printf("Sorry, you do not have enough funds in your account.\n");
    return balance;
  }
  else if (withdrawal_amount < 1){
    printf("Sorry, you cannot withdraw an amount less than 1. Please try again.\n");
    return balance;
  }
  else {
    printf("Withdrawing %.2f from your account...\n", withdrawal_amount);
    balance = balance - withdrawal_amount;
    printf("Withdrawal successful, please collect your cash.\n");
    return balance;
  }
