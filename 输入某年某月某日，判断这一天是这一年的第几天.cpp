//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ���
//�꣺year �£�month �գ�day
#include <stdio.h>
int main()
{
	int year,month,day,sum,i;
	printf("��������");
	scanf("%d",&year); 
	if(year<0)
	{
		printf("����������������\n");return 0; 
	}
	printf("��������");
	scanf("%d",&month);
	if(month<1||month>12)
	{
		printf("��������·�������\n");return 0; 
	}
	printf("��������");
	scanf("%d",&day);
	switch (month)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		{
			if(day>31||day<1)
			{
				printf("�����������������\n"); return 0;
			}
			break;
		}
		case 4:case 6:case 9:case 11:
		{
			if(day>30||day<1)
			{
				printf("�����������������\n");return 0; 
			}
			break;
		 }
		case 2:
		{
			if(year%4==0&&year%100!=0||year%400==0)//������ж����� 
			{
				if(day>29||day<1)
				{
					printf("�����������������\n");return 0; 
				}
			}
			else
			{
				if(day>28||day<1)
				{
					printf("�����������������\n");return 0; 
				}
			}
			break;
		}
	}
	printf("\n�������������%d��%d��%d��\n",year,month,day);
	if(year%4==0&&year%100!=0||year%400==0)//������ж����� 
	{ 
		for(i=month-1;i>=0;i--)
		{
			switch (i)
			{
				case 1:case 3:case 5:case 7:case 8:case 10:
				{
					sum=sum+31;break;
				}
				case 4:case 6:case 9:case 11:
				{
					sum=sum+30;break;
				}
				case 2:
				{
					sum=sum+29;break;
				}
				case 0:
				{
					sum=sum+day;break;
				}
			}
		}
		printf("%d��������%d��%d������һ��ĵ�%d��\n",year,month,day,sum);
	}
	else
	{
		for(i=month-1;i>=0;i--)
		{
			switch (i)
			{
				case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				{
					sum=sum+31;break;
				}
				case 4:case 6:case 9:case 11:
				{
					sum=sum+30;break;
				}
				case 2:
				{
					sum=sum+28;break;
				}
				case 0:
				{
					sum=sum+day;break;
				}
			}
		}
		printf("%d����ƽ��%d��%d������һ��ĵ�%d��\n",year,month,day,sum);
	}
 } 
