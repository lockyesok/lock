#include <stdio.h>
int main()
{
	int a,b,n,sum,m;
	printf("����ǰ����͵�n��\n");
	scanf("%d %d %d",&a,&b,&n);
	sum=b-a;
	int i;
	for(i=3;i<=n;i++)
	{
		m=sum*(i-1)+a;
	}
	printf("%d",m);
 } 
