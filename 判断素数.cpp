//�ж��ǲ�������
#include <stdio.h>
#include <math.h>
void shusu_1(int a);
int shusu_3(int a);
int shusu_2(int a); 
int shusu_4(int a);
int main()
{
	int a;
	printf("�����������жϵ�����\n");
	scanf("%d",&a);
	shusu_4(a);//�ı�����1,2,3,4���� 
 } 
//����һ 
void shusu_1(int a)
{
	int i;
	if(a==1)
	{
		printf("���������������\n");
	}
	else
	{
		for(i=2;i<=a-1;i++)
		{
			if(a%i==0)
			{
				printf("�����������������\n"); 
				break;
			}
		}
		if(i==a)
		{
			printf("���������������\n");
		}
	}
}
//������
int shusu_2(int a)
{
	int i;
	if(a==1||a==2)
	{
		printf("���������������\n");
		return 0;
	}
	if(a%2==0)
	{
		printf("�����������������\n"); 
		return 0;
	}
	else
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				printf("�����������������\n"); 
				return 0;
			}
		}
		if(i==a)
		{
			printf("���������������\n");
			return 0;
		}
	}
}
 //������
 int shusu_3(int a)
{
	int i;
	if(a==1||a==2||a==3)
	{
		printf("���������������\n");
		return 0;
	}
	if(a%2==0)
	{
		printf("�����������������\n"); 
		return 0;
	}
	else
	{
		for(i=2;i<a/2;i++)
		{
			if(a%i==0)
			{
				printf("�����������������\n"); 
				return 0;
			}
		}
		if(i==a/2)
		{
			printf("���������������\n");
			return 0;
		}
	}
}
//������
int shusu_4(int a)
{
	int i;
	if(a==1||a==2)
	{
		printf("���������������\n");
		return 0;
	}
	if(a%2==0)
	{
		printf("�����������������\n"); 
		return 0;
	}
	else
	{
		for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0)
			{
				printf("�����������������\n"); 
				return 0;
			}
		}
		if(i>a/2)
		{
			printf("���������������\n");
			return 0;
		}
	}
 } 
