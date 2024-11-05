// program: Bank account management system Q4
// author: Akash Phukan, date: 05/11/24

#include <stdio.h>
#include <string.h>

// structure for Bank Account
struct BankAccount {
    char account_holder[50];
    int account_number;
    float balance;
    char account_type; // 'S' for Savings, 'C' for Current
    union {
        float interest_rate;    // For savings account
        float overdraft_limit;  // For current account
    } details; // globally declaring structure variable
};

main() {
    struct BankAccount account;

    // Entering account details
    printf("Enter account holder name: ");
    scanf("%s", account.account_holder);
    printf("Enter account number: ");
    scanf("%d", &account.account_number);
    printf("Enter balance: ");
    scanf("%f", &account.balance);
    printf("Enter account type (S for Savings, C for Current): ");
    scanf(" %c", &account.account_type);

    if (account.account_type == 'S' || account.account_type == 's') {
        printf("Enter interest rate for savings account: ");
        scanf("%f", &account.details.interest_rate);
    } else if (account.account_type == 'C' || account.account_type == 'c') {
        printf("Enter overdraft limit for current account: ");
        scanf("%f", &account.details.overdraft_limit);
    } else {
        printf("Invalid account type.\n");
        return 1;
    }

    // Displaying account details
    printf("\nAccount Details:\n");
    printf("Account Holder: %s\n", account.account_holder);
    printf("Account Number: %d\n", account.account_number);
    printf("Balance: %.2f\n", account.balance);
    if (account.account_type == 'S' || account.account_type == 's') {
        printf("Account Type: Savings\n");
        printf("Interest Rate: %.2f%%\n", account.details.interest_rate);
    } else if (account.account_type == 'C' || account.account_type == 'c') {
        printf("Account Type: Current\n");
        printf("Overdraft Limit: %.2f\n", account.details.overdraft_limit);
    }
}
