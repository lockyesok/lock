//������
#include <stdio.h>
#include <stdlib.h>
void mune();
int jia(int a,int b);
int jian(int a,int b);
int cheng(int a,int b);
int chu(int a,int b);
int main()
{
	int a,b,i,sz;
	int (*p[])(int,int)={0,jia,jian,cheng,chu};
	mune();
	sz=sizeof(p)/sizeof(p[0]);
	while(1)
	{
		printf("��ѡ��ʹ��ʲô���㣺\n"); 
		scanf("%d",&i);
		if(i>0&&i<sz||i==sz)
		{
			printf("������������������\n");
			scanf("%d %d",&a,&b);
			printf("%d\n",p[i](a,b));
		}
		else
		{
			printf("ѡ�����������ѡ��\n");
		}
	}

	
	
 } 
void mune()
{
	printf("�������ݣ�ʹ�ö�Ӧ�������\n");
	printf("1:+�ӷ�   2��-����   3��*�˷�\n");
	printf("4:/����   \n");
}
int jia(int a,int b)
{
	printf("%d+%d=",a,b);
	return a+b;
}
int jian(int a,int b)
{
	printf("%d-%d=",a,b);
	return a-b;
}
int cheng(int a,int b)
{
	printf("%d*%d=",a,b);
	return a*b;
}
int chu(int a,int b)
{
	printf("%d/%d=",a,b);
	return a/b;
}
