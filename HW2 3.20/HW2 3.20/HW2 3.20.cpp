#include <stdio.h>

int main()
{
	int work;
	float rate, salary,prosalary;
	printf("Enter # of hours worked:");
	scanf_s("%d",&work);
	printf("Enter hourly rate of the worker:");
	scanf_s("%f",&rate);
	if (work<=40)
	{
		salary = work * rate;
		printf("Salary is $%.2f", salary);
	}
	else
	{
		prosalary = (work - 40) * rate / 2;
		salary = work * rate + prosalary;
		printf("Salary is $%.2f",salary);
	}
}