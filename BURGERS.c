#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int p,b;
		scanf("%d%d",&p,&b);
		if(p>=b)
			{
				printf("%d\n",b);
			}
		else
			{
				printf("%d\n",p);
			}
	}
}
