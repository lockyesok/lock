#include <stdio.h>
#include <math.h>
int main()
{
	float ax,ay,bx,by,sum;
	printf("�������߶�A��B�����꣬A,B֮����س�\n");
	scanf("%f %f %f %f",&ax,&ay,&bx,&by);
	if(fabs(ax)<=10000&&fabs(ay<=10000&&fabs(bx)<=10000&&fabs(by)<=10000))
	{
	sum=sqrt(pow((1.0*ax-bx),2)+pow((1.0*ay-by),2));
	printf("%.3f",sum);
	}
}
