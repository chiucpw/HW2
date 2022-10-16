#include <stdio.h>

int main()
{
	float salary, sales;
	printf("Enter sales in dollars:");
	scanf_s("%f",&sales);
	salary = 200 + sales * 0.09;
	printf("Salary is: $%f",salary);
}