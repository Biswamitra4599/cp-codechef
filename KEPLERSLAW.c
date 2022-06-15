#include<stdio.h>

int main()
{
	
	int T,i;
	scanf("%d",&T);
	if(T>=1 && T<=10000)
	{
		while(T--)
		{
			int T1, T2, R1, R2;			
			float d1,d2;
			
			scanf("%d%d%d%d",&T1,&T2,&R1,&R2);
			d1=(float)(T1*T1)/(float)(T2*T2);
			
			d2=(float)(R1*R1*R1)/(float)(R2*R2*R2);
			if( d1 == d2 )
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}
}
