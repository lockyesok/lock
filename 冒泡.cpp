//排序函数qsort
#include <stdio.h>
#include <stdlib.h>
/*int ppe(const void*e1,const void*e2);
//void qsort(void*a,size_t sz,size_t c,int(*ppe)(const void*el,const void*e2));
int main()
{
	int a[]={9,5,6,7,4,3,2,1,8};
	int i;
	int sz=sizeof(a)/sizeof(a[0]);
	int c=sizeof(a[0]);
	qsort(a,sz,sizeof(a[0]),ppe);
	for(i=0;i<9;i++)
	{
		printf("%d ",a[i]);
	}
 } 
 int ppe(const void* e1,const void* e2)
 {
 	return *(int*)e1-*(int*)e2;
 }*/
 //不使用qsort自创一个可以对所有类型的冒泡排序
void test();
int ppe(void* e1,void* e2);
void maopao(void* a,int sz,int c,int(*ppe)(void*e1,void*e2));
void diaohuan(char*e1,char*e2,int c);
 int main()
 {
 	test();
  } 
 void test()
 {
 	int a[9]={9,8,7,6,5,4,3,2,1};
 	int i=0;
 	int sz=sizeof(a)/sizeof(a[0]);
 	int c=sizeof(a[0]);
 	maopao(a,sz,c,ppe);
 	for(i=0;i<9;i++)
 	{
 		 printf("%d ",a[i]);
	 }
 }
 int ppe(void* e1,void* e2)
 {
 	return *(int*)e1-*(int*)e2;
 }
 void diaohuan(char*e1,char*e2,int c)
 {
 	int i=0;
	 char t;
 	for(i=0;i<c;i++)
 	{
 		t=*e1;
 		*e1=*e2;
 		*e2=t;
 		e1++;
 		e2++;
	 }
 }
 void maopao(void* a,int sz,int c,int(*ppe)(void*e1,void*e2))
 {
 	int i=1;
 	int t;
 	for(i=0;i<sz-1;i++) 
 	{
 		int j=0;
 		for(j=0;j<sz-i-1;j++)
 		{
 			if(ppe((char*)a+j*c,(char*)a+(j+1)*c)>0)
 			{
 				diaohuan((char*)a+j*c,(char*)a+(j+1)*c,c);
			 }
		 }
	 }
 }
