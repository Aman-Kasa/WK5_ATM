#ifndef FUNCTIONS_H
#define FUNCTIONS_H

float deposit(float balance, char transactions[][50], int *trans_count);
float withdraw(float balance, char transactions[][50], int *trans_count);
void check_balance(float balance);
void view_transactions(char transactions[][50], int trans_count);

#endif

