//乘法表
#include <stdio.h>
void chengfabiao(int a); 
int main()
{
	int a;
	printf("请输入想生成几乘几的乘法表\n");
	scanf("%d",&a);
	chengfabiao(a);
 } 
 void chengfabiao(int a)
 {
 	int i,j;
 	for(i=1;i<=a;i++)
 	{
 		for(j=1;j<=i;j++)
 		{
 			printf("%d*%d=%-3d",i,j,i*j);
		 }
		 printf("\n");
	 }
 }
