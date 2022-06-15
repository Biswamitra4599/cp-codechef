#include<stdio.h>
#include<stdbool.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n, temp;
		char a[500];
		
		char arr[1000];
		
		scanf("%d",&n);
		int i, j,k;
		scanf("%s",&arr);
		for (i=0; i<n;i+=2)
			{
				if(arr[i]=='0')
					{
						if (arr[i+1]=='0')
							a[i/2]='A';
						else
							a[i/2]='T';
						
					}
				else
					{
						if (arr[i+1]=='0')
							a[i/2]='C';
						else
							a[i/2]='G';
					}
			}
		a[i/2]=NULL;
		printf("%s\n",a);
		
		
	}
}
