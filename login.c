// login.c
#include "login.h"
#include <stdio.h>
#include <string.h>

#define NUM_USERS 3
#define NAME_LEN 32

char usernames[NUM_USERS][NAME_LEN] = {"aman", "joseph", "thadee"};
int pins[NUM_USERS] = {1234, 5678, 9012};

void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int login(void) {
    char inputName[NAME_LEN];
    int inputPin;

    printf("Enter username: ");
    scanf("%31s", inputName);
    clearInputBuffer();

    printf("Enter 4-digit PIN: ");
    scanf("%d", &inputPin);
    clearInputBuffer();

    for (int i = 0; i < NUM_USERS; i++) {
        if (strcmp(inputName, usernames[i]) == 0 && inputPin == pins[i]) {
            printf("Login successful. Welcome, %s!\n", usernames[i]);
            return i; // return user index
        }
    }

    printf("Login failed.\n");
    return -1;
}

