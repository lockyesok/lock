//�������������С������
#include <stdio.h>
int gongyinshu(int a,int b);
int gongbeishu(int a,int b); 
int main()
{
	int a,b;
	printf("��֪�����������������������С������\n");
	scanf("%d %d",&a,&b);
	int c=gongyinshu(a,b);
	printf("%d��%d���������Ϊ%d\n",a,b,c);
	int d=gongbeishu(a,b); 
	printf("%d��%d����С������Ϊ%d\n",a,b,d);
 } 
 //������ 
 int gongyinshu(int a,int b)
 {
 	int c;
 	if(a<b)
 	{
 		a=a^b;
 		b=a^b;
 		a=a^b;
	 }
	 c=a%b;
	 if(c==0)
	 return b;
	 return gongyinshu(b,c);
 }
 //������ 
 int gongbeishu(int a,int b)
 {
 	int c=gongyinshu(a,b);
 	c=a/c*b;
 	return c;
 }
