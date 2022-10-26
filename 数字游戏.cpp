	#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
	int a,c,b,max,min,cs,sb=0,sj;
	char jx,js;
	do
	{
		printf("请选择模式\n模式一：0-100。（请按1）\n模式二：0-1000。（请按2）\n模式三：0-10000。（请按3）。\n(未进入重复操作一次)\n");
			scanf("%d",&a);
			if(a==1||a==2||a==3)
			{
				switch(a)
				{
					case 1:
					{
						max=100,min=0;
						srand((unsigned int)time(NULL));//srand+time+rand，根据不同时间来设置随机数，基本上是完全随机。 
						c=(int)(rand()%99+1);
						printf("游戏开始\n请输入0--100(0和100除外)你的数字:");
						for(cs=1;;++cs)
						{
							scanf("%d",&b);
							if(b==c)
							{	
								printf("\n恭喜你个倒霉蛋在第%d次踩雷了\n",cs);break;
							}
							else if(b<c&&b>min) 
							{
								min=b;		
								printf("\n恭喜避开第%d次\n这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字：",cs,min,max,min,max);//break;
							}
							else if(c<b&&b<max)
							{
								max=b;
								printf("\n恭喜避开第%d次\n这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字：",cs,min,max,min,max);	
							}
							else
							{
								for(;;)
								{
									if(!sb++)
									{
										printf("\n你是傻逼吗，看不懂题目吗？\n");
										printf("题目是这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字:",min,max,min,max);
									}
									else
									{
										printf("\n你是傻逼吗，这都第%d次了还看不懂题目吗？",sb);
										printf("题目是这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字(别再犯傻了):",min,max,min,max); 
									}
									cs=cs-1;break;
									
								}
							}
					
						}
						break;		
					}
					case 2:
					{
						max=1000,min=0;
						srand((unsigned int)time(NULL));
						c=(int)(rand()%999+1);
						printf("游戏开始\n请输入0--1000(0和1000除外)你的数字:");
						for(cs=1;;++cs)
						{
							scanf("%d",&b);
							if(b==c)
							{	
								printf("\n恭喜你个倒霉蛋在第%d次踩雷了\n",cs);break;
							}
							else if(b<c&&b>min) 
							{
								min=b;		
								printf("\n恭喜避开第%d次\n这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字：",cs,min,max,min,max);//break;
							}
							else if(c<b&&b<max)
							{
								max=b;
								printf("\n恭喜避开第%d次\n这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字：",cs,min,max,min,max);	
							}
							else
							{
								for(;;)
								{
									if(!sb++)
									{
										printf("\n你是傻逼吗，看不懂题目吗？\n");
										printf("题目是这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字:",min,max,min,max);
									}
									else
									{
										printf("\n你是傻逼吗，这都第%d次了还看不懂题目吗？",sb);
										printf("题目是这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字(别再犯傻了):",min,max,min,max); 
									}
									cs=cs-1;break;
									
								}
							}
					
						}
							
						break;
					}
					case 3:
					{
						max=10000,min=0;
						srand((unsigned int)time(NULL));
						c=(int)(rand()%9999+1);
						printf("游戏开始\n请输入0--10000(0和10000除外)你的数字:");		
						for(cs=1;;++cs)
						{
							scanf("%d",&b);
							if(b==c)
							{	
								printf("\n恭喜你个倒霉蛋在第%d次踩雷了\n",cs);break;
							}
							else if(b<c&&b>min) 
							{
								min=b;		
								printf("\n恭喜避开第%d次\n这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字：",cs,min,max,min,max);//break;
							}
							else if(c<b&&b<max)
							{
								max=b;
								printf("\n恭喜避开第%d次\n这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字：",cs,min,max,min,max);	
							}
							else
							{
								for(;;)
								{
									if(!sb++)
									{
										printf("\n你是傻逼吗，看不懂题目吗？\n");
										printf("题目是这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字:",min,max,min,max);
									}
									else
									{
										printf("\n你是傻逼吗，这都第%d次了还看不懂题目吗？",sb);
										printf("题目是这个数在%d--%d之间\n(%d,%d除外)\n请输入你的数字(别再犯傻了):",min,max,min,max); 
									}
									cs=cs-1;break;
									
								}
							}
					
						}
						break;		
					}
				}
				printf("\n避开%d次\n犯傻了%d次\n",cs-1,sb);
				if(!sb)
				sj=0;
				else if(sb>0&&sb<3)
				sj=1;
				else if(sb>=3&&sb<6)
				sj=2;
				else if(sb>=6&&sb<10) 
				sj=3;
				else 
				sj=4;
				if(sj==3)
				printf("眼睛是看不见了吗");
				else if(sj==4)
				printf("这眼睛是装饰品吗，瞎成这样了");
				else if(sj==2)
				printf("眼睛是有点小毛病吗？");
				else if(sj==1)
				printf("眼睛看错点没事，下一次不要看错了");
				else if(!sj)
				printf("眼睛一点毛病没有，真不错");
			
			}
			else
			printf("\n你是不是瞎\n"); 
			printf("\n继续游戏按Y\n"); 
			scanf("%s",&jx);
			if(jx=='y'||jx=='y')
			system("cls"); 
		} while(jx=='Y'||jx=='y');
	}
