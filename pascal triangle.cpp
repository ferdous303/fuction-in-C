#include<stdio.h>
int fact(int num){
	int f=1;
	for(int i=1;i<=num;i++){
		f*=i;
	}
	return f;
}
int pascalTriangle(int limit){
	
	for(int i=0;i<limit;i++){
		for(int k=0;k<=limit-i;k++){
			printf(" ");
		}
		
		for(int j=0;j<=i;j++){
			
			printf("%d ",fact(i)/(fact(j)*fact(i-j)));
		}
		printf("\n");
	}
}
main(){
	int row;
	printf("enter the numbers of rows:");
	scanf("%d",&row);
	pascalTriangle(row);
}
