#include<stdio.h>
int main()
{
	int num, i, min= 999999999,keep=0;
	for (num = 2;num <= 999999999;num++) {
				if (num % 2 == 0 && num % 3 == 0 && num % 4 == 0 && num % 5 == 0 && num % 6 == 0 && num % 7 == 0 && num % 8 == 0 && num % 9 == 0 && num % 10 == 0 && num % 11 == 0&& num % 12 == 0 && num % 13 == 0 && num % 14 == 0 && num % 15 == 0 && num % 16 == 0 && num % 17 == 0 && num % 18 == 0 && num % 19 == 0 && num % 20 == 0)
				{
					printf("keep = %d\n", min);
					keep = num;
					if (keep < min)
					{
						min = keep;
					}
				}
	}
	printf("keep = %d\n", min);
	return 0;
}
