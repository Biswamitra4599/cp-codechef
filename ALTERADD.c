#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x, y,temp, flag=0;
		scanf("%d%d",&x,&y);
		temp=y-x;
		if (temp%3==2)
			printf("no\n");
		else
			printf("yes\n");
			
	}
}
