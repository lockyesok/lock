#include<stdio.h>
#include <math.h>
int main()
{
	int n;
	int a,sn,m,i;
	m=0;
	scanf("%d %d",&n,&a);
	for(i=0;i<n;i++)
	{
		m=m*10+a;//sn=a*pow(10.0,i)+2*sn
		sn+=m;
	}
	printf("%d",sn);
}
