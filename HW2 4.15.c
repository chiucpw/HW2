#include <stdio.h>

int main()
{
	float money1, total1 = 5000;
	float money2, total2 = 5000;
	float money3, total3 = 5000;
	float money4, total4 = 5000;
	float money5, total5 = 5000;
	printf("interest rate=0.1\n");
	for (int i = 1; i < 16; i++)
	{
		money1 = total1 * 1.1;
		total1 = money1;
		printf("%.2f\n",total1);
	}
	printf("interest rate=0.105\n");
	for (int i = 1; i < 16; i++)
	{
		money2 = total2 * 1.105;
		total2 = money2;
		printf("%.2f\n", total2);
	}
	printf("interest rate=0.11\n");
	for (int i = 1; i < 16; i++)
	{
		money3 = total3 * 1.11;
		total3 = money3;
		printf("%.2f\n", total3);
	}
	printf("interest rate=0.115\n");
	for (int i = 1; i < 16; i++)
	{
		money4 = total4 * 1.115;
		total4 = money4;
		printf("%.2f\n", total4);
	}
	printf("interest rate=0.12\n");
	for (int i = 1; i < 16; i++)
	{
		money5 = total5 * 1.2;
		total5 = money5;
		printf("%.2f\n", total5);
	}
}