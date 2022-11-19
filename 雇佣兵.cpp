//m为体力，1点体力战斗1天,有m天为期限的战斗期，n为战斗力，同一个战斗期内战斗天数等于n时n战斗力就会加1，x为能量，当m耗完时补充m比例1:n，求战斗结束时n战斗力为多少
#include <stdio.h>
int main()
{
	int m, n,x;
	int s;
	int i=0;
	printf("请输入体力，战斗力，能量\n");
	scanf("%d %d %d", &m, &n, &x);
	s = m;
	for (m; m >= 0; m--)
	{
		i++;
		if (i == n)
		{
			i = 0;
			n++;
		}
		//补充体力
		if (m == 0)
		{
			i = 0;
			for (x; x > 0; )
			{
				x--;
				m += n;
				if (m >= s)
				{
					m = s;
					break;
				}
					
			}
		}
	}
	printf("%d", n);


}