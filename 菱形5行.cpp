#include <stdio.h>
int main()
{
	int n;
	int i,j,m;
	char a;
	printf("请输入想打印出的字符\n");
	printf("请输入想打印的行数\n");
	scanf("%c",&a);
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i++)
	{
		for(j=1;j<=n/2+1-i;j++)
		{
			printf(" ");
		}
		for(m=1;m<=i*2-1;m++)
		{
			printf("%c",a); 
		}
		printf("\n");
	}
	for(i=1;i<=n/2;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(m=1;m<=n-(2*i);m++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
 } 
