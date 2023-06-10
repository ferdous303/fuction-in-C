#include<stdio.h>
void swapbyrefrence( int &num1 ,int &num2)
{
	int c=num1;
	num1=num2;
	num2=c;
}
main()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	swapbyrefrence(num1,num2);
	printf("%d %d",num1,num2);
	
	
}
