#include<stdio.h>
#include<math.h>

int main()
{
	
	int T,i;
	scanf("%d",&T);
	if(T>=1 && T<=300)
	{
		while(T--)
		{
			int N,D, K=1;
			
			scanf("%d%d",&N,&D);
			if(D==0)
			{
				printf("%d\n",K);
			}
			else if(D<=10)
			{
				K=K*pow(2,D);
				if(K<N)
				{
					printf("%d\n",K);
				}
				else
				{
					printf("%d\n",N);
				}
			}
			else if(D<=21)
			{
				K=K*pow(2,10)*pow(3,D-10);
				if(K<N)
				{
					printf("%d\n",K);
				}
				else
				{
					printf("%d\n",N);
				}
			}
			else
			{
				printf("%d\n",N);
			}
		}
	}
}
