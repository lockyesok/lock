//自幂数
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
int main()
{
	long n,d,j,i;
	long sum,b,m,sm=0;
	printf("请数入从0到  的数\n");
	scanf("%ld", &sum);
	for (i = 0; i <= sum; i++)
	{
		b = i;
		n = 1;
		while (b = b / 10)
		{
			n++;
		}
		m = i;
		sm = 0;
		for (j = 1; j <= n; j++)
		{
			d = m% 10;
			m = m / 10;
			sm =(long) pow((double)d,(double)n) + sm;
		}
		if (sm == i)
			printf("%ld ", sm);
	}
}