#include <stdio.h>
//����ˮ��2��1 
int nn(int n);
int main()
{
	int n;
	int m=0;
	printf("����������ƿ��ˮ\n");
	scanf("%d",&n); 
	m=nn(n);
	printf("%d",n+m);
}
int nn(int n)
{
	int sm,sn;
	sm=n/2;
	sn=n%2;
	if(n==1)
	{
		return 0;
	}
	else
	{
		return sm+nn(sm+sn);
	}
	
}
