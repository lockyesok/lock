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
		printf("��ѡ��ģʽ\nģʽһ��0-100�����밴1��\nģʽ����0-1000�����밴2��\nģʽ����0-10000�����밴3����\n(δ�����ظ�����һ��)\n");
			scanf("%d",&a);
			if(a==1||a==2||a==3)
			{
				switch(a)
				{
					case 1:
					{
						max=100,min=0;
						srand((unsigned int)time(NULL));//srand+time+rand�����ݲ�ͬʱ�������������������������ȫ����� 
						c=(int)(rand()%99+1);
						printf("��Ϸ��ʼ\n������0--100(0��100����)�������:");
						for(cs=1;;++cs)
						{
							scanf("%d",&b);
							if(b==c)
							{	
								printf("\n��ϲ�����ù���ڵ�%d�β�����\n",cs);break;
							}
							else if(b<c&&b>min) 
							{
								min=b;		
								printf("\n��ϲ�ܿ���%d��\n�������%d--%d֮��\n(%d,%d����)\n������������֣�",cs,min,max,min,max);//break;
							}
							else if(c<b&&b<max)
							{
								max=b;
								printf("\n��ϲ�ܿ���%d��\n�������%d--%d֮��\n(%d,%d����)\n������������֣�",cs,min,max,min,max);	
							}
							else
							{
								for(;;)
								{
									if(!sb++)
									{
										printf("\n����ɵ���𣬿�������Ŀ��\n");
										printf("��Ŀ���������%d--%d֮��\n(%d,%d����)\n�������������:",min,max,min,max);
									}
									else
									{
										printf("\n����ɵ�����ⶼ��%d���˻���������Ŀ��",sb);
										printf("��Ŀ���������%d--%d֮��\n(%d,%d����)\n�������������(���ٷ�ɵ��):",min,max,min,max); 
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
						printf("��Ϸ��ʼ\n������0--1000(0��1000����)�������:");
						for(cs=1;;++cs)
						{
							scanf("%d",&b);
							if(b==c)
							{	
								printf("\n��ϲ�����ù���ڵ�%d�β�����\n",cs);break;
							}
							else if(b<c&&b>min) 
							{
								min=b;		
								printf("\n��ϲ�ܿ���%d��\n�������%d--%d֮��\n(%d,%d����)\n������������֣�",cs,min,max,min,max);//break;
							}
							else if(c<b&&b<max)
							{
								max=b;
								printf("\n��ϲ�ܿ���%d��\n�������%d--%d֮��\n(%d,%d����)\n������������֣�",cs,min,max,min,max);	
							}
							else
							{
								for(;;)
								{
									if(!sb++)
									{
										printf("\n����ɵ���𣬿�������Ŀ��\n");
										printf("��Ŀ���������%d--%d֮��\n(%d,%d����)\n�������������:",min,max,min,max);
									}
									else
									{
										printf("\n����ɵ�����ⶼ��%d���˻���������Ŀ��",sb);
										printf("��Ŀ���������%d--%d֮��\n(%d,%d����)\n�������������(���ٷ�ɵ��):",min,max,min,max); 
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
						printf("��Ϸ��ʼ\n������0--10000(0��10000����)�������:");		
						for(cs=1;;++cs)
						{
							scanf("%d",&b);
							if(b==c)
							{	
								printf("\n��ϲ�����ù���ڵ�%d�β�����\n",cs);break;
							}
							else if(b<c&&b>min) 
							{
								min=b;		
								printf("\n��ϲ�ܿ���%d��\n�������%d--%d֮��\n(%d,%d����)\n������������֣�",cs,min,max,min,max);//break;
							}
							else if(c<b&&b<max)
							{
								max=b;
								printf("\n��ϲ�ܿ���%d��\n�������%d--%d֮��\n(%d,%d����)\n������������֣�",cs,min,max,min,max);	
							}
							else
							{
								for(;;)
								{
									if(!sb++)
									{
										printf("\n����ɵ���𣬿�������Ŀ��\n");
										printf("��Ŀ���������%d--%d֮��\n(%d,%d����)\n�������������:",min,max,min,max);
									}
									else
									{
										printf("\n����ɵ�����ⶼ��%d���˻���������Ŀ��",sb);
										printf("��Ŀ���������%d--%d֮��\n(%d,%d����)\n�������������(���ٷ�ɵ��):",min,max,min,max); 
									}
									cs=cs-1;break;
									
								}
							}
					
						}
						break;		
					}
				}
				printf("\n�ܿ�%d��\n��ɵ��%d��\n",cs-1,sb);
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
				printf("�۾��ǿ���������");
				else if(sj==4)
				printf("���۾���װ��Ʒ��Ϲ��������");
				else if(sj==2)
				printf("�۾����е�Сë����");
				else if(sj==1)
				printf("�۾������û�£���һ�β�Ҫ������");
				else if(!sj)
				printf("�۾�һ��ë��û�У��治��");
			
			}
			else
			printf("\n���ǲ���Ϲ\n"); 
			printf("\n������Ϸ��Y\n"); 
			scanf("%s",&jx);
			if(jx=='y'||jx=='y')
			system("cls"); 
		} while(jx=='Y'||jx=='y');
	}
