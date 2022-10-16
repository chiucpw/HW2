#include <stdio.h>

int main()
{
	float interest, principal, rate, days;

	printf("Enter loan principal:");
	scanf_s("%f",&principal);
	printf("Enter interest rate:");
	scanf_s("%f",&rate);
	printf("Enter term of the loan in days:");
	scanf_s("%f",&days);
	interest = principal * rate * days / 365;
	printf("The interest charge is $%.2f",interest);
}