

#include <stdio.h>

int main()
{
	int a,i, flag1, flag2;
	long sum;
	a = 2; flag1 = 0; flag2 = 0; sum = 0;
	for (i = 100; i < 1000; i++)
	{
		flag1 = 0;                //important!
		while (a < i)
		{
			if (i % a == 0)
				flag1 = 1;
			a++;
		}
		a = 2;                   //important!
		if (flag1 == 0)
		{
			printf("%d ", i);
			flag2++;
			sum = sum + i;
		}
		if (flag2 == 5)
		{
			printf("\n");
			flag2 = 0;
		}
	}
	printf("\n素数之和为%ld", sum);
}

