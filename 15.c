#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 100
#define NAME_LEN 50

int main()
{
    struct cust {
        char name[NAME_LEN];
        int acc_no;
        float oldbal;
        float newbal;
        float deposit;
    } cust[MAX_CUSTOMERS];

    int n, i;

    printf("Enter the number of customers (max %d):\n", MAX_CUSTOMERS);
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("\nEnter the details of customer %d:\n", i + 1);

        printf("Enter Name:\n");
        scanf("%s", cust[i].name);  

        printf("Enter account number:\n");
        scanf("%d", &cust[i].acc_no);

        printf("Enter the deposit amount:\n");
        scanf("%f", &cust[i].deposit);

        printf("Enter the old balance:\n");
        scanf("%f", &cust[i].oldbal);

        cust[i].newbal = cust[i].oldbal + cust[i].deposit;
    }

    printf("\n--- Customer Details ---\n");
    for (i = 0; i < n; ++i) {
        printf("\nCustomer Name: %s\n", cust[i].name);
        printf("Account Number: %d\n", cust[i].acc_no);
        printf("Amount Deposited: %.2f\n", cust[i].deposit);
        printf("Old Balance: %.2f\n", cust[i].oldbal);
        printf("New Balance: %.2f\n", cust[i].newbal);
    }

    return 0;
}

