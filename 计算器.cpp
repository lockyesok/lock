//计算器
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
		printf("请选择使用什么运算：\n"); 
		scanf("%d",&i);
		if(i>0&&i<sz||i==sz)
		{
			printf("请输入两个数做运算\n");
			scanf("%d %d",&a,&b);
			printf("%d\n",p[i](a,b));
		}
		else
		{
			printf("选择错误，请重新选择\n");
		}
	}

	
	
 } 
void mune()
{
	printf("输入内容，使用对应的运算符\n");
	printf("1:+加法   2：-减法   3：*乘法\n");
	printf("4:/除法   \n");
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
