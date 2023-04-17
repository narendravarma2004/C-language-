#include <stdio.h>
#include <string.h>

#define NUM_CUSTOMERS 3
Struct Customer {
    Int account_no;
    Char name[50];
    Float balance;
};

Void print_low_balance_customers(struct Customer customers[], int num_customers) {
    Printf(“Customers with balance less than 100 Rs:\n”);

    For (int I = 0; I < num_customers; i++) {
        If (customers[i].balance < 100) {
            Printf(“Account No.: %d, Name: %s\n”, customers[i].account_no, customers[i].name);
        }
    }
}

Int main() {
    Struct Customer customers[NUM_CUSTOMERS];
    For (int I = 0; I < NUM_CUSTOMERS; i++) {
        Printf(“Enter details for customer %d:\n”, i+1);

        Printf(“Account No.: “);
        Scanf(“%d”, &customers[i].account_no);

        Printf(“Name: “);
        Scanf(“%s”, customers[i].name);

        Printf(“Balance: “);
        Scanf(“%f”, &customers[i].balance);
    }
    Print_low_balance_customers(customers, NUM_CUSTOMERS);

    Return 0;
}

