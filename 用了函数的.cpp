//输入某年某月某日，判断这一天是这一年的第几天
//年：year 月：month 日：day
#include <stdio.h>
int hs(int m,int day);
int main()
{
	int year,month,day,sum,i;
	printf("请输入年");
	scanf("%d",&year); 
	if(year<0)
	{
		printf("你输入的年份有问题\n");return 0; 
	}
	printf("请输入月");
	scanf("%d",&month);
	if(month<1||month>12)
	{
		printf("你输入的月份有问题\n");return 0; 
	}
	printf("请输入日");
	scanf("%d",&day);
	switch (month)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		{
			if(day>31||day<1)
			{
				printf("你输入的日期有问题\n"); return 0;
			}
			break;
		}
		case 4:case 6:case 9:case 11:
		{
			if(day>30||day<1)
			{
				printf("你输入的日期有问题\n");return 0; 
			}
			break;
		 }
		case 2:
		{
			if(year%4==0&&year%100!=0||year%400==0)//闰年的判定方法 
			{
				if(day>29||day<1)
				{
					printf("你输入的日期有问题\n");return 0; 
				}
			}
			else
			{
				if(day>28||day<1)
				{
					printf("你输入的日期有问题\n");return 0; 
				}
			}
			break;
		}
	}
	printf("\n你输入的日期是%d年%d月%d日\n",year,month,day);
	if(year%4==0&&year%100!=0||year%400==0)//闰年的判定方法 
	{ 
		sum=hs(month,day);//平年的计数方式 
		if(month>=3)
//因为闰年它在2月比平年多一天，所以闰年只要不超过2月就和平年的天数一样（29天被判定过了在上面的if里面）所以超过3月闰年的同一天就比平年的同一天多一天 
		sum+=1;
		printf("%d年是闰年%d月%d日是这一年的第%d天\n",year,month,day,sum);
	}
	else
	{
		sum=hs(month,day);
		printf("%d年是平年%d月%d日是这一年的第%d天\n",year,month,day,sum);
	}
 } 
 //用一个函数来构成循环，可以节省内存，也方便 
 int hs(int month,int day)
 {
 	int sum;
 	for(month=month-1;month>=0;month--)
		{
			switch (month)
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
		printf("%d",sum); 
	return sum;
 }
