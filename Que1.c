#include<stdio.h>
/*
Input:
Enter any number: 5

Output:
Cube is: 125
*/
void cube(){
	int num;
	
	printf("Enter any number:-");
	scanf("%d",&num);
	
	printf("Cube is:%d",num*num*num);
}

void main(){
	cube();
}
