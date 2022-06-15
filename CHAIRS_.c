#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x, y,temp;
		scanf("%d%d",&x,&y);
		if(x>y)
			temp=x-y;
		else
			temp=0;
		
		printf("%d\n",temp);
			
	}
}
