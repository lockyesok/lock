//�˷���
#include <stdio.h>
void chengfabiao(int a); 
int main()
{
	int a;
	printf("�����������ɼ��˼��ĳ˷���\n");
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
