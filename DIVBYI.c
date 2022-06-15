#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n, i,arr[100000],temp, flag=0;
		scanf("%d",&n);
		temp=n;
		for (i=n-1; i>=0;i--)
		{
			arr[i]=temp;
			if(flag==0)
			{
				temp=temp-i;
				flag=1;
			}
			else
			{
				temp=temp+i;
				flag=0;
			}	
		}
		
		for (i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		
	}
}
