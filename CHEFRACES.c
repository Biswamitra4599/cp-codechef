#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,y,x, flag=0;
		scanf("%d%d%d%d",&x,&y,&a,&b);
		if (x!=a && x!=b)
			{
				flag++;
			}
		if (y!=a && y!=b)
			{
				flag++;
			}
		printf("%d\n",flag);
	}
	
}
