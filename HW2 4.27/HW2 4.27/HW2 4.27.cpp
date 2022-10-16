#include <iostream>
#include <math.h>
int main()
{
	int side1, side2, hypo;
	for (int side1 = 1; side1 < 500; side1++)
	{
		for (int side2 = 1; side2 < 500; side2++)
		{
			hypo = sqrt(pow(side1, 2) + pow(side2, 2));
			if (hypo==(int)hypo)
			{
				printf("%d\t%d\t%d\n",side1,side2,hypo);
			}
		}
	}
}