//最大公因数，与最小公倍数
#include <stdio.h>
int gongyinshu(int a,int b);
int gongbeishu(int a,int b); 
int main()
{
	int a,b;
	printf("想知道那两个数的最大公因数和最小公倍数\n");
	scanf("%d %d",&a,&b);
	int c=gongyinshu(a,b);
	printf("%d和%d的最大公因数为%d\n",a,b,c);
	int d=gongbeishu(a,b); 
	printf("%d和%d的最小公倍数为%d\n",a,b,d);
 } 
 //公因数 
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
 //公倍数 
 int gongbeishu(int a,int b)
 {
 	int c=gongyinshu(a,b);
 	c=a/c*b;
 	return c;
 }
