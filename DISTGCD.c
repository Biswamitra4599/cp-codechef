#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int x,y;
		scanf("%lld%lld",&x,&y);
		long long int temp2,temp3, flag=0;
		double temp;
		
		float k;
		
		if (x>y)
		{
			temp=x;
			x=y;
			y=temp;
			
		}
		if(x<y)
		{
		
			if(y%x==0)
			{
				
				temp=y/x;
				printf("%lf\n",temp);
				k=log2(temp);
				printf("%lf",k);
				temp2=(int)(x*pow(2,k));
				
				if(temp2==y)
				{
					flag=(int)k;
					flag+=y;
					printf("%lld\n",flag);
					
				}
				else
					printf("%d\n",-1);
					
			}
			else
			{
				printf("%d\n",-1);
			}
			
		}
		else if (x==y)
		{
			printf("%lld\n",x);
		}
		
	}
}
