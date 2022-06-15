#include<stdio.h>

int main()
{
	int input1=4, input2=3,input3[]={1,2,3,4};
	int temp,temp2;
	temp=input2%input1;
	while(temp)
	{
		temp2=input3[temp];
		input3[temp]=input3[temp-1];
		input3[temp-1]=temp2;
		temp--;
	}
	while(input1--)
	printf("%d ",input3[input1]);
	return input3;
}
