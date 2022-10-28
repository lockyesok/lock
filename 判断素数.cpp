//判断是不是素数
#include <stdio.h>
#include <math.h>
void shusu_1(int a);
int shusu_3(int a);
int shusu_2(int a); 
int shusu_4(int a);
int main()
{
	int a;
	printf("请输入你想判断的数字\n");
	scanf("%d",&a);
	shusu_4(a);//改变数字1,2,3,4就行 
 } 
//方法一 
void shusu_1(int a)
{
	int i;
	if(a==1)
	{
		printf("你输入的数是素数\n");
	}
	else
	{
		for(i=2;i<=a-1;i++)
		{
			if(a%i==0)
			{
				printf("你输入的数不是素数\n"); 
				break;
			}
		}
		if(i==a)
		{
			printf("你输入的数是素数\n");
		}
	}
}
//方法二
int shusu_2(int a)
{
	int i;
	if(a==1||a==2)
	{
		printf("你输入的数是素数\n");
		return 0;
	}
	if(a%2==0)
	{
		printf("你输入的数不是素数\n"); 
		return 0;
	}
	else
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				printf("你输入的数不是素数\n"); 
				return 0;
			}
		}
		if(i==a)
		{
			printf("你输入的数是素数\n");
			return 0;
		}
	}
}
 //方法三
 int shusu_3(int a)
{
	int i;
	if(a==1||a==2||a==3)
	{
		printf("你输入的数是素数\n");
		return 0;
	}
	if(a%2==0)
	{
		printf("你输入的数不是素数\n"); 
		return 0;
	}
	else
	{
		for(i=2;i<a/2;i++)
		{
			if(a%i==0)
			{
				printf("你输入的数不是素数\n"); 
				return 0;
			}
		}
		if(i==a/2)
		{
			printf("你输入的数是素数\n");
			return 0;
		}
	}
}
//方法四
int shusu_4(int a)
{
	int i;
	if(a==1||a==2)
	{
		printf("你输入的数是素数\n");
		return 0;
	}
	if(a%2==0)
	{
		printf("你输入的数不是素数\n"); 
		return 0;
	}
	else
	{
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				printf("你输入的数不是素数\n"); 
				return 0;
			}
		}
		if(i>a/2)
		{
			printf("你输入的数是素数\n");
			return 0;
		}
	}
 } 
