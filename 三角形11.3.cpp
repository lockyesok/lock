#include <stdio.h>
int main()
{
	int n=3;
	int i,j,m,c;
	scanf("%c",&c);
	for(i=1;i<=n;i++)
	{
		for(m=1;m<=n-i;m++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}
