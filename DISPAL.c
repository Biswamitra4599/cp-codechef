#include<stdio.h>

int main()

{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,x;
		scanf("%d%d",&n, &x);
		int temp;
		temp=2*x-1;
		
		if (n>=temp)
		{
			char arr[100000];
			int i;
			
			for (i=0;i<(n+1/2);i++)
				{
					char c='a';
					c=c + (i%x);
					arr[i]=c;
					arr[n-1-i]=c;
				}
			printf("%s\n",arr);
			
		}
		else
		{
			printf("%d\n",-1);
		}
	}
}
