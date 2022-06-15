#include<stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
		{
			int r1,g1, b1, r2, g2, b2, r3, g3, b3, temp, N;
			scanf("%d",&N);
			scanf("%d%d%d",&r1,&g1,&b1);
			scanf("%d%d%d",&r2,&g2,&b2);
			scanf("%d%d%d",&r3,&g3,&b3);
			if((r1+b1+g1)==N && (r2+g2+b2)==N && (r3+g3+b3)==N)
			{
				temp=(g1+b1+r2+b2+r3+g3);
				if (temp%2 == 0)
				{
						printf("%d\n",temp/2);
				}
			
			}
			
		}
}
