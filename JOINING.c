#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		int temp1, temp2;
		if(n%5==0)
			temp1=n/5;
		else
			temp1=n/5+1;
		
		if (k%5==0)
			temp2=k/5;
		else
			temp2=k/5+1;
		printf("%d\n",(temp1-temp2));
		
	}
}
