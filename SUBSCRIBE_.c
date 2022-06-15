#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x, y,temp, flag=0;
		scanf("%d%d",&x,&y);
		if(x%6!=0)
			flag=1;
		temp=x/6 +flag;
		temp *=y;
		printf("%d\n",temp);
			
	}
}
