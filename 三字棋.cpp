//三字棋
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
 void menu() //菜单 
 {
 	printf("*********************\n");
 	printf("*********************\n");
 	printf("**1：开始   0：退出**\n");
 	printf("*********************\n");
 	printf("*********************\n");
 }
 void xuanzhe()//选择 
 {
 	int a,sb;
 	char y;
	do
	{
		m:
		menu();
		printf("请选择：\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				system("cls");
				printf("游戏开始\n");
				jiegou();
				break;
			case 0:
				{
					system("cls");
					printf("拜拜\n");
					goto error;
					break;
				}
			default:
				{ 
					system("cls");
					printf("\n你是瞎子吗？重新选！！！\n");
					goto m;
					
				}
		}
		if(a!=0)
		{
			printf("继续请按Y\n");
			scanf("%s",&y);
			if(y=='y'||y=='Y')
			system("cls");
		}
	}while(y=='y'||y=='Y'&&a!=0);
	error:;
  } 
  void jiegou()//数组初始化 
  {
  	char arr[C][K]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
  	game(arr,C,K);
  }
  void qipan(char arr[C][K],int c,int k)//棋盘 
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
  void game(char arr[C][K],int c,int k)//游戏内容 
  {
  		
	  while(1)
	  {
	  	qipan(arr,C,K);//打印棋盘 
	  	person(arr,C,K);//玩家下棋 
	  	panduan(arr,C,K);//判断玩家赢了没 
	  	if(panduan(arr,C,K)==1)
	  	{
	  		system("cls");//清空前面的棋盘将最后的结果棋盘打印出来 
			qipan(arr,C,K);
	  		printf("恭喜玩家获胜\n");
	  		break;
		}
		if(panduan(arr,C,K)==2) 
		{
			system("cls");//清空前面的棋盘将最后的结果棋盘打印出来
			qipan(arr,C,K);
			printf("平局"); 
			break; 
		}
	    system("cls");//清空玩家的棋盘，将电脑的融入一起 
		qipan(arr,C,K);
		printf("电脑正在思考\n");
	  	Sleep(1500);//1500毫秒后再执行下面的程序 
	  	computer(arr,C,K);//电脑下棋 
	  	panduan(arr,C,K);//判断 
	  	if(panduan(arr,C,K)==0)
	  	{
	  		system("cls");
			qipan(arr,C,K);
	  		printf("恭喜电脑获胜\n");
	  		break;
		}
		if(panduan(arr,C,K)==2)
		{
			system("cls");
			qipan(arr,C,K);
			printf("平局"); 
			break; 
		}
	  	system("cls");//清空电脑的棋盘 
	  }
  }
  void person(char arr[C][K],int c,int k)//玩家下棋 
  {
  	int a,b;
  	n:
  	printf("请输入你想下的坐标\n");
  	scanf("%d %d",&a,&b);
  	if(a>0&&a<4&&b>0&&b<4)
  	{
	  	if(arr[a-1][b-1]=='*'||arr[a-1][b-1]=='#')
  		{
  			printf("该地以被占\n请重新输入\n");
  		goto n;
		}
		else
		{
			arr[a-1][b-1]='*';
		}
	}
	else
	{
	printf("输入的坐标有误\n");
	goto n;
	}
  	
  }
  void computer(char arr[C][K],int c,int k)//电脑下棋 
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
  		if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][0]!=' ')//3行的结果相同但是不能是空格 
  		{
  			if(arr[i][0]=='*')//看看是谁下的子连接了 
  				return 1;
  			else
  				return 0;
		}
  		
	}
	for(j=0;j<k;j++)
	{
		if(arr[0][j]==arr[1][j]&&arr[1][j]==arr[2][j]&&arr[0][j]!=' ')// 3列的结果相同但是不能是空格 
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
		if(arr[i][j]==' ')//in默认是0，但是只要棋盘内有空格就要改变这个判断值 
		in=1;
	}
	}
	if(in==0)//是0的时候说明棋盘中没有空格了，说明没地方下了，所以平局 
	return 2;
  }
