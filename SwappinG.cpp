#include<stdio.h>
void swap(int n1,int n2)
{
	n1= n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("\n%d %d",n1,n2);
}
main (){
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	swap(num1,num2);
}
