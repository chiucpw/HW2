#include <stdio.h>

int main()
{
    int num;
    float balance, to_char, to_cre, cre_lim, new_bal;

    printf("Enter account number:");
    scanf_s("%d", &num);
    printf("Enter beginning balance:");
    scanf_s("%f", &balance);
    printf("Enter total charges:");
    scanf_s("%f", &to_char);
    printf("Enter total credits:");
    scanf_s("%f", &to_cre);
    printf("Enter credit limit:");
    scanf_s("%f", &cre_lim);
    new_bal = balance + to_char - to_cre;
  
    if (new_bal > cre_lim)
    {
        printf("Account:     %d\n", num);
        printf("Credit limit:%f\n", cre_lim);
        printf("Credit Limit Exceeded.");
        printf("Balance:     %f\n", new_bal);
    }
}
