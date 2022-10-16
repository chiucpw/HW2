#include <iostream>

int main()
{
	printf("(A)\n");
	for (int i = 0; i <= 9; i++) 
	{
		for (int j = 0; j <= i; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (int i = 0; i <= 9; i++) 
	{
		for (int j = i; j <= 9; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (int i = 0; i <= 9; i++) 
	{
		for (int j = 1; j <= i; j++) 
		{
			printf(" ");
		}
		for (int n = 0; n <= 9 - i; n++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (int i = 0; i <= 9; i++) 
	{
		for (int j = 1; j <= 9 - i; j++)
		{
			printf(" ");
		}
		for (int n = 0; n <= i; n++)
		{
			printf("*");
		}
		printf("\n");
	}

}