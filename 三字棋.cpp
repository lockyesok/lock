//������
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#define C 3
#define K 3

int panduan(char arr[C][K],int c,int k);
void computer(char arr[C][K],int c,int k);
void person(char arr[C][K],int c,int k);
void qipan(char arr[C][K],int c,int k);
void game(char arr[C][K],int c,int k);
void jiegou();
void menu(); 
void xuanzhe();
int main()
{
	xuanzhe();
	
 }  
 void menu() //�˵� 
 {
 	printf("*********************\n");
 	printf("*********************\n");
 	printf("**1����ʼ   0���˳�**\n");
 	printf("*********************\n");
 	printf("*********************\n");
 }
 void xuanzhe()//ѡ�� 
 {
 	int a,sb;
 	char y;
	do
	{
		m:
		menu();
		printf("��ѡ��\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				system("cls");
				printf("��Ϸ��ʼ\n");
				jiegou();
				break;
			case 0:
				{
					system("cls");
					printf("�ݰ�\n");
					goto error;
					break;
				}
			default:
				{ 
					system("cls");
					printf("\n����Ϲ��������ѡ������\n");
					goto m;
					
				}
		}
		if(a!=0)
		{
			printf("�����밴Y\n");
			scanf("%s",&y);
			if(y=='y'||y=='Y')
			system("cls");
		}
	}while(y=='y'||y=='Y'&&a!=0);
	error:;
  } 
  void jiegou()//�����ʼ�� 
  {
  	char arr[C][K]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
  	game(arr,C,K);
  }
  void qipan(char arr[C][K],int c,int k)//���� 
  {
  	int i,j;
 	for(i=0;i<c;i++)
	{
		for(j=0;j<k;j++)
		{
			printf(" %c ",arr[i][j]);
			if(j<k-1)
			printf("|");
		}
		printf("\n");
		if(i<c-1)
		for(j=0;j<k;j++)
		{
			printf("---");
			if(j<k-1)
			printf("|");
		}
		printf("\n");
	}
  }
  void game(char arr[C][K],int c,int k)//��Ϸ���� 
  {
  		
	  while(1)
	  {
	  	qipan(arr,C,K);//��ӡ���� 
	  	person(arr,C,K);//������� 
	  	panduan(arr,C,K);//�ж����Ӯ��û 
	  	if(panduan(arr,C,K)==1)
	  	{
	  		system("cls");//���ǰ������̽����Ľ�����̴�ӡ���� 
			qipan(arr,C,K);
	  		printf("��ϲ��һ�ʤ\n");
	  		break;
		}
		if(panduan(arr,C,K)==2) 
		{
			system("cls");//���ǰ������̽����Ľ�����̴�ӡ����
			qipan(arr,C,K);
			printf("ƽ��"); 
			break; 
		}
	    system("cls");//�����ҵ����̣������Ե�����һ�� 
		qipan(arr,C,K);
		printf("��������˼��\n");
	  	Sleep(1500);//1500�������ִ������ĳ��� 
	  	computer(arr,C,K);//�������� 
	  	panduan(arr,C,K);//�ж� 
	  	if(panduan(arr,C,K)==0)
	  	{
	  		system("cls");
			qipan(arr,C,K);
	  		printf("��ϲ���Ի�ʤ\n");
	  		break;
		}
		if(panduan(arr,C,K)==2)
		{
			system("cls");
			qipan(arr,C,K);
			printf("ƽ��"); 
			break; 
		}
	  	system("cls");//��յ��Ե����� 
	  }
  }
  void person(char arr[C][K],int c,int k)//������� 
  {
  	int a,b;
  	n:
  	printf("�����������µ�����\n");
  	scanf("%d %d",&a,&b);
  	if(a>0&&a<4&&b>0&&b<4)
  	{
	  	if(arr[a-1][b-1]=='*'||arr[a-1][b-1]=='#')
  		{
  			printf("�õ��Ա�ռ\n����������\n");
  		goto n;
		}
		else
		{
			arr[a-1][b-1]='*';
		}
	}
	else
	{
	printf("�������������\n");
	goto n;
	}
  	
  }
  void computer(char arr[C][K],int c,int k)//�������� 
  {
  	int a,b;
  	srand((unsigned int)time(NULL));
  	t:
	a=rand()%c;
  	b=rand()%k;
  	if(arr[a][b]=='*'||arr[a][b]=='#')
  	{
  		goto t;
	}
	else
	arr[a][b]='#';
  }
  int panduan(char arr[C][K],int c,int k)
  {
  	int i,j,in;
  	for(i=0;i<c;i++)
  	{
  		if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][0]!=' ')//3�еĽ����ͬ���ǲ����ǿո� 
  		{
  			if(arr[i][0]=='*')//������˭�µ��������� 
  				return 1;
  			else
  				return 0;
		}
  		
	}
	for(j=0;j<k;j++)
	{
		if(arr[0][j]==arr[1][j]&&arr[1][j]==arr[2][j]&&arr[0][j]!=' ')// 3�еĽ����ͬ���ǲ����ǿո� 
		{
  			if(arr[i][0]=='*')
  			return 1;
  			else
  			return 0;
		}
	}
	for(i=0;i<c;i++)
	{
		
	for(j=0;j<k;j++)
	{
		if(arr[i][j]==' ')//inĬ����0������ֻҪ�������пո��Ҫ�ı�����ж�ֵ 
		in=1;
	}
	}
	if(in==0)//��0��ʱ��˵��������û�пո��ˣ�˵��û�ط����ˣ�����ƽ�� 
	return 2;
  }
