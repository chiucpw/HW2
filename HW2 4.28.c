#include <stdio.h>

int main()
{
	int paycode;
	printf("1.manager\n2.hourly\n3.commission\n4.pieceworkers\n");
	printf("Enter the paycode :");
	scanf_s("%d",&paycode);
	switch (paycode)
	{
		case 1:
			printf("fixed weekly salary");
			break;
		case 2:
			printf("fixed hourly wage for up to the first 40 hours,1.5 times hourly wage for overtime");
			break;
		case 3:
			printf("$250+0.057 of gross weekly salse");
			break;
		case 4:
			printf("fixed amount for each the items who produce");
			break;
	}
}