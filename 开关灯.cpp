//��һ���˹ر����еƣ��ڶ����˽�2�ı����ĵƴ򿪣���3���˺�֮����˽��Լ������ĵ��෴����
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int d, r;
	printf("������Ƶ������������˵�����\n");
	scanf("%d %d", &d, &r);
	int arr[10000] = { 0 };
	for (int i = 1; i <= r; i++)
	{
		if (i == 2)
		{
			for (int j = 0; j < d; j++)
			{
				if ((j + 1) % 2==0)
				{
					arr[j] = 1;
				}
			}
		}
		if (i >= 3)
		{
			for (int j = 0; j < d; j++)
			{
				if ((j + 1) % i == 0)
				{
					arr[j] = arr[j] ^ 1;
				}
			}
		}
	}
	for (int i = 0; i < d; i++)
	{
		if (arr[i] == 0)
			printf("%d ",i+1);
	}

}