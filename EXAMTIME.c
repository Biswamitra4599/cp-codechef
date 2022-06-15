#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
		{
			int da, dt, dd, sa, st,sd, dtem,stem, flag=0;
			scanf("%d%d%d",&da,&dt,&dd);
			scanf("%d%d%d",&sa,&st,&sd);
			dtem=da+dt+dd;
			stem=sa+st+sd;
			
			if(dtem>stem)
				{
					flag=1;
				}
			else if(dtem<stem)
				{
					flag=2;
					
				}
			else
				{
					if(da>sa)
						{
							flag=1;
						}
					else if(da<sa)
						{
							flag=2;
						}
					else
						{
							if(dt>st)
								{
									flag=1;
								}
							else if(dt<st)
								{
									flag=2;
								}
							else
								{
									flag=0;
								}
							
						}
				}
			if(flag==0)
				{
					printf("tie\n");
				}
			else if(flag==1)
				{
					printf("dragon\n");
				}
			else if(flag==2)
				{
					printf("sloth\n");
				}
		}
}
