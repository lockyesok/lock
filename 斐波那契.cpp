//쳲�������/����3������
#include <stdio.h>
long p(int a);
int main()
{
	long sum;
	int a;
	printf("������ڼ������������\n");
	scanf("%d",&a);
	sum=p(a);
	printf("%d",sum);
 } 
 long p(int a)
 {
 	if(a<2||a==2)
 	{
 		return 1;
	 }
	 else 
	 {
	 	return p(a-1)+p(a-2);
	 }
 }
 //���ʹ�С���� 
